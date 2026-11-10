/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0348405c; name: FUN_0348405c
 */


void FUN_0348405c(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int local_2c;
  int iStack_28;
  undefined1 auStack_24 [4];
  
  if (param_1 == 0) {
    for (lVar2 = *(long *)(PTR_DAT_047e6f80 + 0x10); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x20)) {
      if (*(char *)(lVar2 + 0x46d) != '\0') goto LAB_034840e4;
    }
  }
  else {
    local_2c = (int)param_1;
    iStack_28 = (int)((ulong)param_1 >> 0x20);
    if ((local_2c == 0) || (iStack_28 == 0)) {
      FUN_0349dde0(&local_2c,&iStack_28);
      param_1 = CONCAT44(iStack_28,local_2c);
    }
    for (lVar2 = *(long *)(PTR_DAT_047e6f80 + 0x10); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x20)) {
      if (*(long *)(lVar2 + 0x28) == param_1) {
LAB_034840e4:
        *(undefined4 *)(lVar2 + 0x7c) = param_2;
        puVar1 = PTR_DAT_047e6d80;
        for (lVar2 = *(long *)(PTR_DAT_047e6d58 + 0x10); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x10)
            ) {
          fVar3 = *(float *)(lVar2 + 0x70);
          fVar4 = *(float *)(lVar2 + 0x74);
          fVar6 = *(float *)(lVar2 + 0x60);
          fVar5 = *(float *)(lVar2 + 100);
          fVar7 = *(float *)(lVar2 + 0x68);
          fVar8 = *(float *)(lVar2 + 0x6c);
          *(float *)(lVar2 + 0x5c) = fVar7;
          *(float *)(lVar2 + 0x44) = fVar8 * fVar5 - fVar6 * fVar3;
          *(float *)(lVar2 + 0x48) = fVar8;
          *(float *)(lVar2 + 0x3c) = fVar7 * fVar3 - fVar5 * fVar4;
          *(float *)(lVar2 + 0x40) = fVar6 * fVar4 - fVar8 * fVar7;
          *(float *)(lVar2 + 0x4c) = fVar3;
          *(float *)(lVar2 + 0x50) = fVar4;
          *(float *)(lVar2 + 0x54) = fVar6;
          *(float *)(lVar2 + 0x58) = fVar5;
          FUN_03411c9c(puVar1,*(undefined8 *)(*(long *)(lVar2 + 8) + 0x78),auStack_24);
        }
        return;
      }
    }
  }
  return;
}


