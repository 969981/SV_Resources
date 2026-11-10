/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 013f8a48; name: FUN_013f8a48
 */


void FUN_013f8a48(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  undefined8 local_40;
  undefined4 local_38;
  float local_34;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x50) = *param_2;
  lVar2 = *(long *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  if (lVar2 != 0) {
    fVar3 = *(float *)(param_1 + 0x50);
    if (*(float *)(lVar2 + 0xc0) * 0.5 != fVar3) {
      local_38 = *(undefined4 *)(lVar2 + 0x23c);
      local_40 = 0x2b08000010;
      local_34 = fVar3;
      FUN_00e08a00(*(long *)(lVar2 + 0x180) + 0x28,*(long *)(lVar2 + 0x180),&local_40);
      *(float *)(lVar2 + 0xc0) = fVar3 + fVar3;
      *(undefined1 *)(lVar2 + 0x199) = 1;
      FUN_00e08aac(lVar2);
      lVar2 = *(long *)(param_1 + 0x48);
    }
    fVar3 = *(float *)(param_1 + 0x54);
    if (*(float *)(lVar2 + 0x158) != fVar3) {
      local_38 = *(undefined4 *)(lVar2 + 0x23c);
      local_40 = 0x3b08000010;
      local_34 = fVar3;
      FUN_00e08a00(*(long *)(lVar2 + 0x180) + 0x28,*(long *)(lVar2 + 0x180),&local_40);
      *(float *)(lVar2 + 0x158) = fVar3;
      *(undefined1 *)(lVar2 + 0x199) = 1;
      FUN_00e08aac(lVar2);
      lVar2 = *(long *)(param_1 + 0x48);
    }
    fVar3 = *(float *)(param_1 + 0x58);
    if (*(float *)(lVar2 + 0x160) != fVar3) {
      local_38 = *(undefined4 *)(lVar2 + 0x23c);
      local_40 = 0x3d08000010;
      local_34 = fVar3;
      FUN_00e08a00(*(long *)(lVar2 + 0x180) + 0x28,*(long *)(lVar2 + 0x180),&local_40);
      *(float *)(lVar2 + 0x160) = fVar3;
      *(undefined1 *)(lVar2 + 0x199) = 1;
      FUN_00e08aac(lVar2);
      lVar2 = *(long *)(param_1 + 0x48);
    }
    fVar3 = *(float *)(param_1 + 0x5c);
    if (*(float *)(lVar2 + 0x15c) != fVar3) {
      local_38 = *(undefined4 *)(lVar2 + 0x23c);
      local_40 = 0x3c08000010;
      local_34 = fVar3;
      FUN_00e08a00(*(long *)(lVar2 + 0x180) + 0x28,*(long *)(lVar2 + 0x180),&local_40);
      *(float *)(lVar2 + 0x15c) = fVar3;
    }
  }
  return;
}


