/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a87210; name: FUN_01a87210
 */


undefined8 FUN_01a87210(undefined8 param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  char *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 local_7c [4];
  float local_78;
  float fStack_74;
  undefined8 local_70;
  ulong uStack_68;
  float local_58;
  float local_54;
  
  puVar5 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar5 == (undefined8 *)0x0) || (pcVar7 = (char *)*puVar5, pcVar7 == (char *)0x0)) {
    if ((DAT_04831b68 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_04831b68);
      pcVar7 = &DAT_04831b50;
      if (iVar3 != 0) {
        DAT_04831b50 = 0;
        DAT_04831b58 = 0;
        FUN_00100190(PTR_FUN_047d8010,&DAT_04831b50,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04831b68);
      }
    }
    else {
      pcVar7 = &DAT_04831b50;
    }
  }
  dVar8 = (double)FUN_00c41790(param_1,2,0);
  dVar9 = (double)FUN_00c41790(param_1,3,0);
  dVar10 = (double)FUN_00c41790(param_1,4,0);
  dVar11 = (double)FUN_00c41790(param_1,5,0);
  dVar12 = (double)FUN_00c41790(param_1,6,0);
  dVar13 = (double)FUN_00c41790(param_1,7,0);
  dVar14 = (double)FUN_00c41790(param_1,8,0);
  iVar3 = FUN_00cc4dc0(param_1,9);
  if (((DAT_04831b80 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04831b80), iVar4 != 0)) {
    DAT_048320f0 = '\x01';
    __cxa_guard_release(&DAT_04831b80);
  }
  local_7c[0] = iVar3 != 0;
  local_70 = CONCAT44((float)dVar9,(float)dVar8);
  uStack_68 = (ulong)(uint)(float)dVar10;
  local_78 = (float)dVar14;
  fStack_74 = (float)dVar13;
  local_58 = (float)dVar12;
  local_54 = (float)dVar11;
  cVar2 = *pcVar7;
  pcVar1 = (code *)PTR_FUN_047d8020;
  if (DAT_048320f0 == '\0') {
    pcVar1 = (code *)0x0;
  }
  if (cVar2 == '\x02') {
    if (*(long *)(pcVar7 + 8) == 0) {
      return 0;
    }
    lVar6 = *(long *)(*(long *)(pcVar7 + 8) + 0x10);
    if (lVar6 == 0) {
      return 0;
    }
    lVar6 = lVar6 + -0x28;
  }
  else {
    if (cVar2 == '\x03') {
      FUN_01a87490(pcVar7 + 8,pcVar1,0,&local_70,&local_54,&local_58,&fStack_74,&local_78,local_7c);
      return 0;
    }
    if ((cVar2 != '\x01') && (cVar2 != '\0')) {
      return 0;
    }
    lVar6 = *(long *)(pcVar7 + 8);
    if (lVar6 == 0) {
      return 0;
    }
  }
  (*pcVar1)(lVar6,iVar3 != 0);
  return 0;
}


