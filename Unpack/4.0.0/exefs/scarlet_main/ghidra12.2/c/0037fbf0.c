/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0037fbf0; name: FUN_0037fbf0
 */


uint FUN_0037fbf0(uint param_1,uint *param_2,ulong param_3)

{
  uint uVar1;
  uint *puVar2;
  
  if (param_2 == (uint *)0x0) {
    return 0;
  }
  param_1 = ~param_1;
  for (; (param_3 != 0 && (((ulong)param_2 & 3) != 0)); param_2 = (uint *)((long)param_2 + 1)) {
    param_1 = *(uint *)(&DAT_03cd8068 + (ulong)(param_1 & 0xff ^ (uint)(byte)*param_2) * 4) ^
              param_1 >> 8;
    param_3 = param_3 - 1;
  }
  for (; 0x1f < param_3; param_3 = param_3 - 0x20) {
    param_1 = *param_2 ^ param_1;
    uVar1 = *(uint *)(&DAT_03cd8868 + (ulong)(param_1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_03cd8c68 + (ulong)(param_1 & 0xff) * 4) ^
            *(uint *)(&DAT_03cd8468 + (ulong)(param_1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_03cd8068 + (ulong)(param_1 >> 0x18) * 4) ^ param_2[1];
    uVar1 = *(uint *)(&DAT_03cd8868 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_03cd8c68 + (ulong)(uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_03cd8468 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_03cd8068 + (ulong)(uVar1 >> 0x18) * 4) ^ param_2[2];
    uVar1 = *(uint *)(&DAT_03cd8868 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_03cd8c68 + (ulong)(uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_03cd8468 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_03cd8068 + (ulong)(uVar1 >> 0x18) * 4) ^ param_2[3];
    uVar1 = *(uint *)(&DAT_03cd8868 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_03cd8c68 + (ulong)(uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_03cd8468 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_03cd8068 + (ulong)(uVar1 >> 0x18) * 4) ^ param_2[4];
    uVar1 = *(uint *)(&DAT_03cd8868 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_03cd8c68 + (ulong)(uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_03cd8468 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_03cd8068 + (ulong)(uVar1 >> 0x18) * 4) ^ param_2[5];
    puVar2 = param_2 + 7;
    uVar1 = *(uint *)(&DAT_03cd8868 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_03cd8c68 + (ulong)(uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_03cd8468 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_03cd8068 + (ulong)(uVar1 >> 0x18) * 4) ^ param_2[6];
    param_2 = param_2 + 8;
    uVar1 = *(uint *)(&DAT_03cd8868 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_03cd8c68 + (ulong)(uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_03cd8468 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_03cd8068 + (ulong)(uVar1 >> 0x18) * 4) ^ *puVar2;
    param_1 = *(uint *)(&DAT_03cd8868 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_03cd8c68 + (ulong)(uVar1 & 0xff) * 4) ^
              *(uint *)(&DAT_03cd8468 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_03cd8068 + (ulong)(uVar1 >> 0x18) * 4);
  }
  for (; 3 < param_3; param_3 = param_3 - 4) {
    param_1 = *param_2 ^ param_1;
    param_1 = *(uint *)(&DAT_03cd8868 + (ulong)(param_1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_03cd8c68 + (ulong)(param_1 & 0xff) * 4) ^
              *(uint *)(&DAT_03cd8468 + (ulong)(param_1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_03cd8068 + (ulong)(param_1 >> 0x18) * 4);
    param_2 = param_2 + 1;
  }
  for (; param_3 != 0; param_3 = param_3 - 1) {
    param_1 = *(uint *)(&DAT_03cd8068 + (ulong)(param_1 & 0xff ^ (uint)(byte)*param_2) * 4) ^
              param_1 >> 8;
    param_2 = (uint *)((long)param_2 + 1);
  }
  return ~param_1;
}


