/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0036e030; name: FUN_0036e030
 */


void FUN_0036e030(ulong param_1,uint *param_2,ulong param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_168 [8];
  long local_160;
  ulong local_158;
  uint local_34;
  
  lVar3 = FUN_00376bf0(param_1,&LAB_0036e1e0);
  if (lVar3 == 0) {
    *param_2 = 0;
    uVar5 = param_1 & 0xfffffffffffffffc;
    uStack_188 = *(undefined8 *)(uVar5 + 0x28);
    local_190 = *(undefined8 *)(uVar5 + 0x20);
    uStack_178 = *(undefined8 *)(uVar5 + 0x38);
    uStack_180 = *(undefined8 *)(uVar5 + 0x30);
    FUN_00368450(auStack_168);
    uStack_1a8 = uStack_188;
    local_1b0 = local_190;
    uStack_198 = uStack_178;
    uStack_1a0 = uStack_180;
    FUN_0036a570(&local_1b0,&DAT_03c16438,auStack_168);
    *param_2 = *param_2 | 1;
    if (local_158 != 0) {
      if ((param_3 & 1) == 0) {
        lVar3 = 0;
        uVar5 = 0;
        do {
          puVar1 = (undefined8 *)(local_160 + lVar3);
          uStack_1c8 = puVar1[1];
          local_1d0 = *puVar1;
          uStack_1b8 = puVar1[3];
          uStack_1c0 = puVar1[2];
          uStack_1e8 = puVar1[1];
          local_1f0 = *puVar1;
          uStack_1d8 = puVar1[3];
          uStack_1e0 = puVar1[2];
          iVar2 = FUN_0034ce20(&local_1f0,&local_34);
          if (iVar2 == 0) {
            uStack_228 = uStack_1c8;
            local_230 = local_1d0;
            uStack_218 = uStack_1b8;
            uStack_220 = uStack_1c0;
            pvVar4 = (void *)FUN_00366f90(&local_230);
            free(pvVar4);
          }
          else {
            *param_2 = *param_2 | 1 << (ulong)(local_34 & 0x1f);
          }
          uVar5 = uVar5 + 1;
          lVar3 = lVar3 + 0x20;
        } while (uVar5 < local_158);
      }
      else {
        lVar3 = 0;
        uVar5 = 0;
        do {
          puVar1 = (undefined8 *)(local_160 + lVar3);
          uStack_1c8 = puVar1[1];
          local_1d0 = *puVar1;
          uStack_1b8 = puVar1[3];
          uStack_1c0 = puVar1[2];
          uStack_208 = puVar1[1];
          local_210 = *puVar1;
          uStack_1f8 = puVar1[3];
          uStack_200 = puVar1[2];
          iVar2 = FUN_0034cee0(&local_210,&local_34);
          if (iVar2 == 0) {
            uStack_228 = uStack_1c8;
            local_230 = local_1d0;
            uStack_218 = uStack_1b8;
            uStack_220 = uStack_1c0;
            pvVar4 = (void *)FUN_00366f90(&local_230);
            free(pvVar4);
          }
          else {
            *param_2 = *param_2 | 1 << (ulong)(local_34 & 0x1f);
          }
          uVar5 = uVar5 + 1;
          lVar3 = lVar3 + 0x20;
        } while (uVar5 < local_158);
      }
    }
    FUN_00368470(auStack_168);
    FUN_00376c90(param_1,&LAB_0036e1e0,(ulong)*param_2 + 1);
  }
  else {
    *param_2 = (int)lVar3 - 1;
  }
  return;
}


