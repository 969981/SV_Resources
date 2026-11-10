/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02520530; name: FUN_02520530
 */


undefined8 FUN_02520530(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  
  dVar3 = (double)FUN_00c41790(param_1,1,0);
  dVar4 = (double)FUN_00c41790(param_1,2,0);
  uVar5 = FUN_00c41790(param_1,3,0);
  if ((DAT_0484e3a8 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_0484e3a8);
    if (iVar2 != 0) {
      __cxa_guard_release(uVar5,&DAT_0484e3a8);
    }
  }
  uVar1 = FUN_025205f8(CONCAT44((float)dVar4,(float)dVar3));
  FUN_00c419e0(param_1,uVar1 & 1);
  return 1;
}


