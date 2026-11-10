/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026f2c48; name: FUN_026f2c48
 */


undefined1  [16] FUN_026f2c48(long param_1)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  
  plVar2 = *(long **)(param_1 + 0x88);
  if (plVar2 == (long *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    lVar3 = plVar2[2];
    cVar1 = *(char *)(*plVar2 + lVar3);
    plVar2[2] = lVar3 + 1;
    if (cVar1 == -0x78) {
      uVar5 = *(undefined4 *)(*plVar2 + lVar3 + 1);
      plVar2[2] = lVar3 + 5;
    }
    plVar2 = *(long **)(param_1 + 0x88);
    if (plVar2 != (long *)0x0) {
      uVar7 = 0;
      uVar6 = 0;
      lVar3 = plVar2[2];
      cVar1 = *(char *)(*plVar2 + lVar3);
      plVar2[2] = lVar3 + 1;
      if (cVar1 == -0x78) {
        uVar6 = *(undefined4 *)(*plVar2 + lVar3 + 1);
        plVar2[2] = lVar3 + 5;
      }
      plVar2 = *(long **)(param_1 + 0x88);
      if (plVar2 != (long *)0x0) {
        lVar3 = plVar2[2];
        cVar1 = *(char *)(*plVar2 + lVar3);
        plVar2[2] = lVar3 + 1;
        if (cVar1 == -0x78) {
          uVar7 = (ulong)*(uint *)(*plVar2 + lVar3 + 1);
          plVar2[2] = lVar3 + 5;
        }
      }
      goto LAB_026f2cf8;
    }
  }
  uVar7 = 0;
  uVar6 = 0;
LAB_026f2cf8:
  auVar4._4_4_ = uVar6;
  auVar4._0_4_ = uVar5;
  auVar4._8_8_ = uVar7;
  return auVar4;
}


