/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024c45c0; name: FUN_024c45c0
 */


undefined8 FUN_024c45c0(undefined8 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar3 = FUN_01af2210(param_1,1);
  dVar4 = (double)FUN_00c41790(param_1,2,0);
  dVar5 = (double)FUN_00c41790(param_1,3,0);
  dVar6 = (double)FUN_00c41790(param_1,4,0);
  dVar7 = (double)FUN_00c41790(param_1,5,0);
  if ((DAT_0484cb30 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_0484cb30);
    if (iVar2 != 0) {
      DAT_0484e7b8 = '\x01';
      __cxa_guard_release(&DAT_0484cb30);
    }
  }
  uStack_48 = CONCAT44((float)dVar7,(float)dVar6);
  puVar1 = &LAB_02b9b6d0;
  if (DAT_0484e7b8 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  local_50 = CONCAT44((float)dVar5,(float)dVar4);
  FUN_024c46dc(uVar3,puVar1,0,&local_50);
  return 0;
}


