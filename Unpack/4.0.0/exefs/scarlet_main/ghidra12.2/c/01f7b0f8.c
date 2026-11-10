/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f7b0f8; name: FUN_01f7b0f8
 */


void FUN_01f7b0f8(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)(param_1 + 8);
  if (param_2 != param_3) {
    lVar7 = 0;
    puVar1 = PTR_DAT_047cfbb0 + 0x10;
    do {
      plVar2 = (long *)(lVar6 + lVar7);
      lVar3 = param_2 + lVar7;
      *plVar2 = (long)puVar1;
      FUN_01cfa5b0(plVar2 + 1,lVar3 + 8);
      FUN_01cfa5b0(plVar2 + 5,lVar3 + 0x28);
      plVar2[9] = *(long *)(lVar3 + 0x48);
      FUN_01f7a9d4(plVar2 + 10,lVar3 + 0x50);
      FUN_01f7a9d4(plVar2 + 0xe,lVar3 + 0x70);
      lVar5 = *(long *)(lVar3 + 0x90);
      *(undefined1 *)(plVar2 + 0x13) = *(undefined1 *)(lVar3 + 0x98);
      plVar2[0x12] = lVar5;
      FUN_01d01e08(plVar2 + 0x14,lVar3 + 0xa0);
      FUN_01d01e70(plVar2 + 0x18,lVar3 + 0xc0);
      FUN_01cfa5b0(plVar2 + 0x1c,lVar3 + 0xe0);
      FUN_01cfa5b0(plVar2 + 0x20,lVar3 + 0x100);
      lVar5 = *(long *)(lVar3 + 0x120);
      *(undefined4 *)(plVar2 + 0x25) = *(undefined4 *)(lVar3 + 0x128);
      plVar2[0x24] = lVar5;
      FUN_01cfa5b0(plVar2 + 0x26,lVar3 + 0x130);
      *(undefined4 *)(plVar2 + 0x2a) = *(undefined4 *)(lVar3 + 0x150);
      FUN_01d01e08(plVar2 + 0x2b,lVar3 + 0x158);
      lVar5 = *(long *)(lVar3 + 0x178);
      lVar4 = *(long *)(lVar3 + 0x180);
      *(undefined1 *)(plVar2 + 0x31) = *(undefined1 *)(lVar3 + 0x188);
      plVar2[0x2f] = lVar5;
      plVar2[0x30] = lVar4;
      FUN_01d01ed8(plVar2 + 0x32,lVar3 + 400);
      memcpy(plVar2 + 0x33,(void *)(lVar3 + 0x198),0x28);
      FUN_01cfa5b0(plVar2 + 0x38,lVar3 + 0x1c0);
      lVar7 = lVar7 + 0x1e0;
    } while (param_3 - param_2 != lVar7);
    lVar6 = lVar6 + lVar7;
  }
  *(long *)(param_1 + 8) = lVar6;
  return;
}


