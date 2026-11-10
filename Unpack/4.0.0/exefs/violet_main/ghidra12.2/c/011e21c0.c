/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011e21c0; name: FUN_011e21c0
 */


ulong FUN_011e21c0(undefined8 param_1,long param_2,long *param_3,uint param_4,undefined8 param_5)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  int *piVar7;
  ulong uVar8;
  undefined8 uVar9;
  uint uVar10;
  byte abStack_8c [12];
  undefined4 auStack_80 [12];
  undefined1 auStack_38 [8];
  
  iVar1 = *(int *)(param_2 + 0x36c);
  uVar9 = *(undefined8 *)(param_2 + 0x290);
  uVar3 = (**(code **)(*param_3 + 0x98))(param_3);
  uVar6 = FUN_010e161c(uVar9,uVar3);
  uVar6 = uVar6 & 0xffffffff;
  if (((*PTR_DAT_047d7940 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d7940), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7940);
  }
  uVar9 = *(undefined8 *)PTR_DAT_047d7948;
  *(undefined8 *)PTR_DAT_047d7950 = uVar9;
  piVar7 = (int *)FUN_00cf60cc(uVar9,param_4);
  if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 0x27) ||
     (uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[0x13], uVar8 == 0)) {
    uVar10 = 0;
  }
  else {
    uVar10 = (uint)*(byte *)((long)piVar7 + uVar8);
  }
  if ((param_4 & 0xffff) == 0xae) {
    uVar8 = (**(code **)(*param_3 + 0x300))(param_3,7);
    uVar10 = 0;
    if ((uVar8 & 1) == 0) {
      uVar10 = 7;
    }
  }
  if (iVar1 == 0) {
    if (uVar10 == 0) {
LAB_011e2278:
      uVar6 = FUN_0183db04(*(undefined8 *)(param_2 + 0x290),uVar6,0);
      return uVar6;
    }
    if (uVar10 < 10) {
      uVar10 = 1 << (ulong)(uVar10 & 0x1f);
      if ((uVar10 & 0x238) != 0) goto LAB_011e2278;
      if ((uVar10 & 0x82) != 0) {
        return uVar6;
      }
    }
  }
  else {
    FUN_011e2464(auStack_38);
    if (uVar10 == 0) {
switchD_011e2398_caseD_3:
      uVar9 = 2;
    }
    else {
      switch(uVar10) {
      case 1:
        uVar9 = 4;
        break;
      case 2:
        uVar9 = 5;
        break;
      case 3:
      case 9:
        goto switchD_011e2398_caseD_3;
      default:
        goto switchD_011e2398_caseD_4;
      case 7:
        goto switchD_011e2398_caseD_7;
      }
    }
    FUN_011e244c(auStack_80,uVar9,uVar6);
    FUN_011e2474(auStack_38,auStack_80);
    uVar3 = *(undefined4 *)(param_2 + 0x36c);
    uVar4 = FUN_011e2458(*(undefined8 *)(param_2 + 0x290));
    cVar2 = FUN_010e171c(auStack_38,uVar3,uVar4,*(undefined8 *)(param_2 + 0x30),auStack_80);
    if (cVar2 != '\0') {
      uVar6 = FUN_012440f0(param_5,cVar2);
      uVar6 = FUN_010e161c(*(undefined8 *)(param_2 + 0x290),auStack_80[uVar6 & 0xff]);
      return uVar6 & 0xffffffff;
    }
    cVar2 = FUN_01238ce0(auStack_38,uVar3,uVar4,abStack_8c);
    if (cVar2 != '\0') {
      uVar6 = FUN_012440f0(param_5,cVar2);
      return (ulong)abStack_8c[uVar6 & 0xff];
    }
  }
switchD_011e2398_caseD_4:
  uVar6 = 10;
switchD_011e2398_caseD_7:
  return uVar6;
}


