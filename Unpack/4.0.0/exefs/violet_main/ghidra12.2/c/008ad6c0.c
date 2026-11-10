/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008ad6c0; name: FUN_008ad6c0
 */


void FUN_008ad6c0(long param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  short *psVar4;
  undefined8 uVar5;
  short *psVar6;
  long *plVar7;
  long *plVar8;
  
  psVar6 = *(short **)(param_2 + 0xf8);
  if (*psVar6 == 2) {
    puVar2 = (undefined8 *)FUN_00896e78(0x20);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[2] = 0;
      puVar2[3] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
    }
    plVar8 = (long *)(param_1 + 0xf8);
    *plVar8 = (long)puVar2;
    uVar5 = *(undefined8 *)(psVar6 + 0xc);
    iVar1 = FUN_008f0054(uVar5);
    plVar7 = (long *)FUN_00896e78(0x48);
    if (plVar7 != (long *)0x0) {
      FUN_008f00f8(plVar7,5,3,iVar1 + -1);
      *plVar7 = (long)(PTR_DAT_047d23c8 + 0x10);
    }
    FUN_008b63bc(plVar7,uVar5);
    *(long **)(*plVar8 + 0x18) = plVar7;
    psVar4 = (short *)*plVar8;
  }
  else {
    if (*psVar6 != 1) {
      *(undefined8 *)(param_1 + 0xf8) = 0;
      return;
    }
    puVar2 = (undefined8 *)FUN_00896e78(0x20);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[2] = 0;
      puVar2[3] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
    }
    plVar7 = (long *)(param_1 + 0xf8);
    *plVar7 = (long)puVar2;
    lVar3 = FUN_00896e78(0x50);
    if (lVar3 != 0) {
      FUN_008b5434(0,0,lVar3,5,3,1);
    }
    FUN_008b54d4(lVar3,*(undefined8 *)(psVar6 + 0xc));
    *(long *)(*plVar7 + 0x18) = lVar3;
    psVar4 = (short *)*plVar7;
  }
  if (psVar4 != (short *)0x0) {
    *(undefined1 *)(param_1 + 0xf0) = 4;
    *psVar4 = *psVar6;
  }
  return;
}


