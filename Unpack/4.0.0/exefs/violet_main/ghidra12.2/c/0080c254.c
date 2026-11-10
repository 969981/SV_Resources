/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0080c254; name: FUN_0080c254
 */


undefined8 FUN_0080c254(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_70 [56];
  undefined8 local_38;
  
  uVar1 = FUN_0079db14();
  if ((uVar1 & 1) != 0) {
    FUN_007a3438(auStack_70,*param_2,*(undefined4 *)((long)param_2 + 0xc),param_1);
    FUN_007a36c4(auStack_70);
    lVar2 = FUN_027e983c(*(undefined8 *)(param_1 + 0x218));
    if (lVar2 == 0) {
      FUN_007985e8(*(undefined8 *)(param_1 + 0x218),local_38);
      return 1;
    }
    FUN_027e983c();
  }
  return 0;
}


