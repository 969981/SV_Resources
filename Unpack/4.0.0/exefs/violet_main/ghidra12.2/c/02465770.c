/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02465770; name: FUN_02465770
 */


undefined8 FUN_02465770(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char local_40 [8];
  undefined1 auStack_38 [8];
  
  uVar2 = FUN_02464980(param_1,1);
  uVar3 = FUN_00c92df0(param_1,2,0);
  if (((DAT_048494b8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048494b8), iVar1 != 0)) {
    DAT_048497e8 = 1;
    __cxa_guard_release(&DAT_048494b8,uVar3);
  }
  FUN_02465838(local_40,uVar2,uVar3);
  FUN_0245e9a0(param_1,local_40);
  if (local_40[0] == '\x01') {
    FUN_0245beb4(auStack_38);
  }
  return 1;
}


