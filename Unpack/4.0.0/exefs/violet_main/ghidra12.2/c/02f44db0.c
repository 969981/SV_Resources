/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f44db0; name: FUN_02f44db0
 */


void FUN_02f44db0(long param_1,undefined4 param_2)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 local_50;
  undefined4 local_48;
  
  lVar1 = tpidr_el0;
  if (*(long *)(param_1 + 0x800) == 0) {
    plVar3 = (long *)0x0;
    iVar6 = -1;
    bVar2 = false;
  }
  else {
    lVar7 = (long)DAT_0486b380;
    lVar4 = *(long *)(lVar1 + 0x1000b8);
    if (lVar4 == 0) {
      lVar4 = FUN_00e5d3b4();
      *(long *)(lVar1 + 0x1000b8) = lVar4;
      iVar5 = DAT_0486b380;
      iVar6 = (int)*(undefined8 *)(lVar4 + lVar7 * 8 + 1000);
      if (lVar4 == 0) {
        lVar4 = FUN_00e5d3b4();
        *(long *)(lVar1 + 0x1000b8) = lVar4;
      }
    }
    else {
      iVar6 = (int)*(undefined8 *)(lVar4 + lVar7 * 8 + 1000);
      iVar5 = DAT_0486b380;
    }
    *(long *)(lVar4 + (long)iVar5 * 8 + 1000) = (long)(iVar6 + 1);
    plVar3 = *(long **)(param_1 + 0x800);
    bVar2 = iVar6 == 0;
  }
  bVar2 = (bool)(bVar2 & plVar3 != (long *)0x0);
  if ((*(char *)(param_1 + 0x999) != '\0') || (bVar2)) {
    local_50 = 0x4502000010;
    local_48 = param_2;
    if (bVar2) {
      (**(code **)(*plVar3 + 0x20))(plVar3,&local_50);
    }
  }
  FUN_0300e5c8(*(undefined8 *)(param_1 + 0x498),param_2);
  if (iVar6 != -1) {
    lVar7 = (long)DAT_0486b380;
    lVar4 = *(long *)(lVar1 + 0x1000b8);
    if (lVar4 == 0) {
      lVar4 = FUN_00e5d3b4();
      *(long *)(lVar1 + 0x1000b8) = lVar4;
    }
    *(long *)(lVar4 + lVar7 * 8 + 1000) = (long)iVar6;
  }
  return;
}


