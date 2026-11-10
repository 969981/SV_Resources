/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024de4b0; name: FUN_024de4b0
 */


undefined8 FUN_024de4b0(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  char *pcVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar3 == (undefined8 *)0x0) || (pcVar4 = (char *)*puVar3, pcVar4 == (char *)0x0)) {
    if ((DAT_0484cc70 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_0484cc70);
      pcVar4 = &DAT_0484cc48;
      if (iVar2 != 0) {
        DAT_0484cc48 = 0;
        DAT_0484cc50 = 0;
        FUN_00100190(&LAB_024c8ee8,&DAT_0484cc48,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_0484cc70);
      }
    }
    else {
      pcVar4 = &DAT_0484cc48;
    }
  }
  dVar6 = (double)FUN_00c41790(param_1,2,0);
  dVar7 = (double)FUN_00c41790(param_1,3,0);
  dVar8 = (double)FUN_00c41790(param_1,4,0);
  if (((DAT_0484d460 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0484d460), iVar2 != 0)) {
    DAT_0484e978 = '\x01';
    __cxa_guard_release((float)dVar8,&DAT_0484d460);
  }
  fVar5 = 0.0;
  pcVar1 = (code *)PTR_thunk_FUN_026fa818_047deff8;
  if (DAT_0484e978 == '\0') {
    pcVar1 = (code *)0x0;
  }
  if (((*pcVar4 == '\x01') || (*pcVar4 == '\0')) && (*(long *)(pcVar4 + 8) != 0)) {
    fVar5 = (float)(*pcVar1)(CONCAT44((float)dVar7,(float)dVar6));
  }
  FUN_00c46da0((double)fVar5,param_1);
  return 1;
}


