/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018dc6e0; name: FUN_018dc6e0
 */


undefined8 FUN_018dc6e0(long param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  undefined1 auStack_e0 [144];
  undefined8 local_50;
  char local_40 [16];
  undefined1 auStack_30 [16];
  
  uVar6 = 0;
  if (*(long *)(param_1 + 0x4f0) != 0) {
    fVar7 = *(float *)(param_1 + 0x430) - *(float *)(param_1 + 0x434);
    bVar1 = false;
    bVar2 = true;
    bVar3 = false;
    if (1.1920929e-07 < *(float *)(param_1 + 0x430)) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar7)) {
        bVar1 = fVar7 < 1.1920929e-07;
        bVar2 = fVar7 == 1.1920929e-07;
        bVar3 = false;
      }
    }
    if ((((bVar2 || bVar1 != bVar3) || ((param_3 & 1) != 0)) &&
        (uVar4 = FUN_018dc884(), (uVar4 & 1) != 0)) &&
       ((FUN_018dc7bc(local_40,*(undefined8 *)(param_1 + 0x4f0)), local_40[0] != '\0' &&
        (lVar5 = FUN_015c9f1c(param_1 + 0x488,auStack_30), lVar5 != 0)))) {
      *(undefined8 *)(param_1 + 0x480) = *(undefined8 *)(lVar5 + 0x10);
      local_50 = 0;
      memcpy(auStack_e0,(void *)(lVar5 + 0x20),0x90);
      FUN_018dc7e4(param_1,auStack_e0);
      uVar6 = 1;
    }
    else {
      uVar6 = 0;
    }
  }
  return uVar6;
}


