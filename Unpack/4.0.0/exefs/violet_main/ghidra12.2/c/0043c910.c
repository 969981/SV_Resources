/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0043c910; name: FUN_0043c910
 */


undefined8
FUN_0043c910(long param_1,undefined8 *param_2,long param_3,undefined8 param_4,undefined8 param_5,
            int param_6)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 local_34;
  
  plVar2 = *(long **)(param_1 + 0x20);
  if (plVar2 == (long *)0x0) {
    plVar2 = (long *)FUN_004400b0(param_5,param_4);
    *(long **)(param_1 + 0x20) = plVar2;
    if (plVar2 == (long *)0x0) {
      return 0;
    }
  }
  lVar4 = *plVar2;
  if ((param_3 == 0) && ((*(uint *)(lVar4 + 4) >> 2 & 1) == 0)) {
    iVar1 = FUN_0043e850(param_5,&local_34);
    if (iVar1 < 1) {
LAB_0043c9bc:
      FUN_004806c0(6,0xa1,0x9e,"external/openssl/crypto/evp/m_sigver.c",0x2a);
      return 0;
    }
    FUN_0045bce0(local_34);
    param_3 = FUN_0043d130();
    if (param_3 == 0) goto LAB_0043c9bc;
    plVar2 = *(long **)(param_1 + 0x20);
    lVar4 = *plVar2;
  }
  if (param_6 == 0) {
    if (*(code **)(lVar4 + 0x70) == (code *)0x0) {
      if (*(long *)(lVar4 + 0xd0) != 0) {
        uVar6 = 8;
        goto LAB_0043ca24;
      }
      iVar1 = FUN_0043f1c0();
      goto joined_r0x0043cac4;
    }
    iVar1 = (**(code **)(lVar4 + 0x70))(plVar2,param_1);
    if (iVar1 < 1) {
      return 0;
    }
    lVar4 = *(long *)(param_1 + 0x20);
    uVar6 = 0x40;
  }
  else {
    if (*(code **)(lVar4 + 0x80) == (code *)0x0) {
      if (*(long *)(lVar4 + 0xd8) != 0) {
        uVar6 = 0x10;
LAB_0043ca24:
        *(undefined4 *)(plVar2 + 4) = uVar6;
        *(undefined1 **)(param_1 + 0x28) = &LAB_0043cfd0;
        goto LAB_0043ca34;
      }
      iVar1 = FUN_0043f3b0();
joined_r0x0043cac4:
      if (iVar1 < 1) {
        return 0;
      }
      goto LAB_0043ca34;
    }
    iVar1 = (**(code **)(lVar4 + 0x80))(plVar2,param_1);
    if (iVar1 < 1) {
      return 0;
    }
    lVar4 = *(long *)(param_1 + 0x20);
    uVar6 = 0x80;
  }
  *(undefined4 *)(lVar4 + 0x20) = uVar6;
LAB_0043ca34:
  iVar1 = FUN_00440390(*(undefined8 *)(param_1 + 0x20),0xffffffff,0xf8,1,0,param_3);
  if (iVar1 < 1) {
    return 0;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x20);
  }
  if ((*(byte *)(**(long **)(param_1 + 0x20) + 4) >> 2 & 1) == 0) {
    uVar3 = FUN_0042bc40(param_1,param_3,param_4);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    pcVar5 = *(code **)(**(long **)(param_1 + 0x20) + 0xf8);
    if (pcVar5 != (code *)0x0) {
      uVar3 = (*pcVar5)(*(long **)(param_1 + 0x20),param_1);
      return uVar3;
    }
  }
  return 1;
}


