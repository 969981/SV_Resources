/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01290a5c; name: FUN_01290a5c
 */


void FUN_01290a5c(undefined4 *param_1,int param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)(param_1 + 0x10);
  *puVar7 = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[0xc] = 0x1000101;
  *(undefined2 *)(param_1 + 0xd) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x36) = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  lVar1 = tpidr_el0;
  if ((((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) ||
      (lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8), lVar3 == 0)) &&
     (lVar3 = *(long *)(lVar1 + 0x30), lVar3 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar3 = DAT_04859430;
    *(long *)(lVar1 + 0x30) = DAT_04859430;
  }
  param_1[0x40] = 0;
  *(long *)(param_1 + 0x3a) = lVar3;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0x3fffffffffffffff;
  *(undefined8 *)(param_1 + 0x3e) = 0;
  *(undefined8 *)(param_1 + 0x42) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x46) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) ||
      (lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8), lVar3 == 0)) &&
     (lVar3 = *(long *)(lVar1 + 0x30), lVar3 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar3 = DAT_04859430;
    *(long *)(lVar1 + 0x30) = DAT_04859430;
  }
  *(long *)(param_1 + 0x4c) = lVar3;
  *(undefined1 *)(param_1 + 0x58) = 1;
  param_1[0x52] = 0;
  *(undefined8 *)(param_1 + 0x4e) = 0x3fffffffffffffff;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)((long)param_1 + 0x175) = 0;
  *(undefined8 *)(param_1 + 0x62) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)((long)param_1 + 0x195) = 0;
  if (param_2 == 2) {
    *param_1 = 2;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined **)(param_1 + 2) = &DAT_04560480;
    *(undefined8 *)(param_1 + 4) = 1;
    pcVar4 = *(code **)(param_1 + 0x12);
    if (pcVar4 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x14) = 0;
      *(undefined8 *)(param_1 + 0x16) = 0;
      *puVar7 = 0;
      *(undefined8 *)(param_1 + 0x12) = 0;
      (*pcVar4)(param_1 + 0x18);
    }
    *(undefined4 **)(param_1 + 0x18) = param_1;
    puVar5 = &LAB_02a1a33c;
    *(undefined1 **)(param_1 + 0x10) = &LAB_02a19f30;
    *(undefined1 **)(param_1 + 0x12) = &LAB_02a1a32c;
    puVar6 = &LAB_02a1a330;
  }
  else if (param_2 == 1) {
    *param_1 = 1;
    *(undefined **)(param_1 + 2) = &DAT_04560408;
    *(undefined8 *)(param_1 + 4) = 3;
    pcVar4 = *(code **)(param_1 + 0x12);
    *(undefined **)(param_1 + 6) = &DAT_04560450;
    *(undefined8 *)(param_1 + 8) = 2;
    if (pcVar4 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x14) = 0;
      *(undefined8 *)(param_1 + 0x16) = 0;
      *puVar7 = 0;
      *(undefined8 *)(param_1 + 0x12) = 0;
      (*pcVar4)(param_1 + 0x18);
    }
    *(undefined4 **)(param_1 + 0x18) = param_1;
    puVar5 = &LAB_02a19f24;
    *(undefined1 **)(param_1 + 0x10) = &LAB_02a19f08;
    *(undefined1 **)(param_1 + 0x12) = &LAB_02a19f14;
    puVar6 = &LAB_02a19f18;
  }
  else {
    if (param_2 != 0) {
      return;
    }
    *param_1 = 0;
    *(undefined **)(param_1 + 2) = &DAT_045602a0;
    *(undefined8 *)(param_1 + 4) = 7;
    pcVar4 = *(code **)(param_1 + 0x12);
    *(undefined **)(param_1 + 6) = &DAT_04560348;
    *(undefined8 *)(param_1 + 8) = 8;
    if (pcVar4 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x14) = 0;
      *(undefined8 *)(param_1 + 0x16) = 0;
      *puVar7 = 0;
      *(undefined8 *)(param_1 + 0x12) = 0;
      (*pcVar4)(param_1 + 0x18);
    }
    *(undefined4 **)(param_1 + 0x18) = param_1;
    puVar5 = &LAB_02a19efc;
    *(undefined1 **)(param_1 + 0x10) = &LAB_02a18ee8;
    *(undefined1 **)(param_1 + 0x12) = &LAB_02a18ef4;
    puVar6 = &LAB_02a19ef0;
  }
  *(undefined1 **)(param_1 + 0x14) = puVar6;
  *(undefined1 **)(param_1 + 0x16) = puVar5;
  return;
}


