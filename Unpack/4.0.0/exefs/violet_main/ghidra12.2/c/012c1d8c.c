/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012c1d8c; name: FUN_012c1d8c
 */


void FUN_012c1d8c(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *local_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [260];
  undefined4 local_34;
  undefined8 local_18;
  
  uVar4 = *(undefined8 *)(*(long *)PTR_DAT_047d3f70 + 0x88);
  local_34 = 0xc11ccccd;
  local_18 = uVar4;
  memset(auStack_138,0,0x100);
  uStack_140 = *(undefined8 *)PTR_DAT_047d8d98;
  local_148 = auStack_138;
  FUN_012c2080(uVar4,&uStack_140,&local_18,&local_34,&local_148);
  FUN_012c1fac(uVar4,&local_18);
  if (((*PTR_DAT_047d92e0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d92e0), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d94d8,PTR_DAT_047d92e8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d92e0);
  }
  lVar3 = *(long *)PTR_DAT_047d92e8;
  *(long *)PTR_DAT_047d92f0 = lVar3;
  uVar4 = *(undefined8 *)(lVar3 + 0x48);
  if (((*PTR_DAT_047d8c00 & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8c00,uVar4), iVar1 != 0)) {
    FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c00);
  }
  uVar2 = *(undefined8 *)PTR_DAT_047d8c08;
  *(undefined8 *)PTR_DAT_047d8c10 = uVar2;
  FUN_012c1efc(uVar2,uVar4,0);
  return;
}


