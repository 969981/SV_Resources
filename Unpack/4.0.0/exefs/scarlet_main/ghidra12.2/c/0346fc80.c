/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0346fc80; name: FUN_0346fc80
 */


undefined8 FUN_0346fc80(long *param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  uVar3 = *(uint *)(param_1 + 1);
  if (uVar3 <= param_2) {
    if (*(uint *)((long)param_1 + 0xc) < param_2) {
      uVar1 = *(uint *)((long)param_1 + 0xc) + (param_2 - uVar3);
      lVar4 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,*param_1,(ulong)uVar1 * 0x78);
      if (lVar4 == 0) {
        return 0;
      }
      *param_1 = lVar4;
      *(uint *)((long)param_1 + 0xc) = uVar1;
    }
    if (uVar3 < param_2) {
      lVar4 = (ulong)uVar3 * 0x78 + 0x70;
      lVar5 = (ulong)param_2 - (ulong)uVar3;
      do {
        if (*param_1 != 0) {
          puVar2 = (undefined4 *)(*param_1 + lVar4);
          *(undefined8 *)(puVar2 + -0x13) = 0;
          *(undefined8 *)(puVar2 + -0x11) = 0x3f80000000000000;
          *(undefined8 *)(puVar2 + -0xf) = 0x3f8000003f800000;
          *(undefined8 *)(puVar2 + -0xd) = 0;
          *(undefined8 *)(puVar2 + -0xb) = 0;
          puVar2[-9] = 0;
          *puVar2 = 0;
          *(undefined8 *)(puVar2 + -8) = 0x3f80000042c80000;
          *(undefined8 *)(puVar2 + -6) = 0xffffffff;
          *(undefined8 *)(puVar2 + -4) = 0;
          *(undefined8 *)(puVar2 + -2) = 0x3f800000;
        }
        lVar5 = lVar5 + -1;
        lVar4 = lVar4 + 0x78;
      } while (lVar5 != 0);
    }
  }
  *(uint *)(param_1 + 1) = param_2;
  return 1;
}


