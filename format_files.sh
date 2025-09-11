#!/bin/bash
files="$1"
error_count=0

while IFS= read -r file; do
  if [ -n "$file" ] && [ -f "$file" ]; then
    echo "📝 格式化: $file"
    if clang-format -style=file -i "$file"; then
      echo "✅ 格式化成功: $file"
    else
      echo "❌ 格式化失败: $file"
      ((error_count++))
    fi
  fi
done <<< "$files"

exit $error_count
