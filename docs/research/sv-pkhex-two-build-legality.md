# 真实 PK9 合法性：原始 PKHeX 对照原生数据嵌入版本

这层测试必须将从朱紫 4.0.0 原始文件生成、SHA-256 验证通过的五张 Gen9 遭遇表注入一个**隔离的 PKHeX.Core 源码副本**，重新编译 PKHeX.Core，再对完全相同的真实 PK9 官方测试样本执行 `LegalityAnalysis`。原始固定版本的 PKHeX 代码及资源不修改。

严格源头：`native-encounter-build.json` 必须为 `GENERATED_FROM_4_0_0_NATIVE_M2_VERIFIED_SOURCES`，五张输出表无一缺失，并验证每项字节数与 SHA-256。新脚本 `Stage-SV-Native-PKHeX-Resources.py` 负责向隔离副本替换资源并写证明；`Compare-SV-PK9-Embedded-Legality.py` 用原样本 SHA 证明相同输入，逐一比较合法性、命中遭遇类别、非法校验项和负例；`tests/test_sv_pkhex_embedded_legality.py` 覆盖篡改、重名和拒绝覆盖原始参考库。

必须区分三种结果：官方合法 PK9 原版运行（6 样本）；原生候选 PK9 传给**仍使用原版数据库**的合法性检查（仅兼容性烟测）；**重新编译原生遭遇表作为嵌入资源的 PKHeX.Core**，对相同官方 PK9 进行判定（真正的数据库替换回归）。三者不能混称。

注意：此测试可以确证对应五张数据库导致的判定变化，**不等于**覆盖朱紫 4.0.0 剧情事件锁闪、PID/IV 生成器、活动团体战或 HOME 转移合法性；仍需要独立原生 RNG 与实机样本。
