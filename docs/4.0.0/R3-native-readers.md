# R3 — SV 4.0.0 原生模型与动画证据适配器

> **重要**：`native_sv.py` 目前是只读 FlatBuffers 结构与跨文件关联检查器，不是 GLB 转换器。`NATIVE_STRUCTURE_ONLY` 不等于材质、UV、顶点数值、蒙皮权重、LOD 或动画重放正确；不得将这种状态提升到 `resources/`。

## 格式与真实文件来源

原生文件：`Unpack/4.0.0/romfs/arc/data.trpfs/virtual/`。

- 原生字段结构对应 `tools/PokeDocs/SV/Flatbuffers/model/{trmdl,trmsh,trmbf,trmtr,trskl}.fbs` 和 `tools/PokeDocs/SV/Flatbuffers/animation/tranm.fbs`。
- 测试样本：`pokemon/data/pm0025/pm0025_00_00/pm0025_00_00.{trmdl,trmsh,trmbf,trmtr,trskl}`，动画：`pm0025_00_00_00010_defaultidle01.tranm`。
- 全部文件通过仓库已存在的原生文件原始位置读取，不修改 `virtual/`，GitHub Actions 不上传任何二进制转换产物。
- 读取路径必须位于 `virtual/` 内；文件偏移、vtable、字符串、向量和骨骼父指针均经过范围检查。

## 本地运行

从仓库根目录运行（Python 3.10+）：

```sh
python -m unittest discover -s tests -p test_sv_native.py -v
python scripts/resource_pipeline/native_sv.py inspect --root Unpack/4.0.0/romfs/arc/data.trpfs --source pokemon/data/pm0025/pm0025_00_00/pm0025_00_00.trskl
python scripts/resource_pipeline/native_sv.py audit-bundle --root Unpack/4.0.0/romfs/arc/data.trpfs --model pokemon/data/pm0025/pm0025_00_00/pm0025_00_00.trmdl --animation pokemon/data/pm0025/pm0025_00_00/pm0025_00_00_00010_defaultidle01.tranm --output Unpack/4.0.0/romfs/arc/data.trpfs/parsed/r3/pm0025_native_evidence.json
```

## 证据链与验收

| 关系 | 可自动证明的内容 | 尚未证明 |
| --- | --- | --- |
| TRMDL → TRMSH / TRMTR / TRSKL | 原生字符串引用存在、对应文件能通过 FlatBuffers 解析 | 渲染输出与游戏一致 |
| TRMSH → TRMBF | 原生缓冲引用以及结构化尺寸 | 索引拓扑、顶点值/坐标系 |
| TRMSH ↔ TRMTR | 材质名称匹配、UV 属性存在 | shader 语义、贴图采样/UV 方向 |
| TRSKL ↔ TRANM | 原生骨骼名称存在且层级无环，原生轨道联合类型与帧数检查 | 插值、压缩旋转还原、蒙皮重放 |
| TRMDL LOD | LOD 表和索引记录 | 各级模型的几何保真和切换阈值 |

当前的 `r34.py` GLB 结构验证与人工复核门槛继续保留。下一阶段需要实现真正的顶点流、TRMBF 索引流、RGBA/压缩旋转及纹理解码后，通过可重复生成的 GLB 与原生资源逐项对照；不要把成功解析 FlatBuffers 当作完成 3D 转换。

## 自动 CI

`.github/workflows/verify-sv-native-model.yml` 在 PR/变更提交上只稀疏检出指定的六个原生输入，执行合成数据单元测试和真实样本的只读解析、材质/骨骼名称匹配诊断。若真实样本 schema 与读取器不一致会直接失败，并显示精确失败项目。该工作流不会生成或上传 `.glb`、贴图、原生资源归档。
