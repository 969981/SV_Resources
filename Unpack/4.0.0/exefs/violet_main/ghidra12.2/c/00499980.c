/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00499980; name: FUN_00499980
 */


undefined4 FUN_00499980(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 local_18;
  int local_14;
  
  if (param_1 == 0) {
    return 0x4d;
  }
  uVar3 = FUN_0043e2a0();
  iVar1 = FUN_0045d190(uVar3,0,&local_14);
  if (iVar1 == 0) {
    local_14 = FUN_0043e2a0(param_1);
  }
  uVar3 = FUN_0045bea0(*(undefined8 *)(param_2 + 0x20));
  iVar2 = FUN_0045d190(uVar3,0,&local_18);
  iVar1 = local_14;
  if (iVar2 == 0) {
    return 0x4e;
  }
  iVar2 = FUN_0043e280(local_18);
  uVar4 = 0;
  if (iVar1 != iVar2) {
    uVar4 = 0x4c;
  }
  return uVar4;
}


