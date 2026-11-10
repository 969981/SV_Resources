/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026865e0; name: FUN_026865e0
 */


undefined8 FUN_026865e0(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 local_40;
  ulong uStack_38;
  
  uVar3 = FUN_0267ca50(param_1,1);
  dVar4 = (double)FUN_00c41790(param_1,2,0);
  dVar5 = (double)FUN_00c41790(param_1,3,0);
  dVar6 = (double)FUN_00c41790(param_1,4,0);
  if ((DAT_04856810 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04856810);
    if (iVar2 != 0) {
      DAT_048582d0 = '\x01';
      DAT_048582d8 = 1;
      __cxa_guard_release(&DAT_04856810);
    }
  }
  local_40 = CONCAT44((float)dVar5,(float)dVar4);
  uStack_38 = (ulong)(uint)(float)dVar6;
  uVar1 = 0x68;
  if (DAT_048582d0 == '\0') {
    uVar1 = 0;
  }
  FUN_026866ec(uVar3,uVar1,DAT_048582d8,&local_40);
  return 0;
}


