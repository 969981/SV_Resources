/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006c4e40; name: FUN_006c4e40
 */


undefined4 FUN_006c4e40(long *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_70 [64];
  undefined1 auStack_30 [8];
  undefined4 local_28;
  
  while( true ) {
    FUN_006c44c4(auStack_70);
    uVar1 = (**(code **)(*param_1 + 0x10))(param_1);
    FUN_006c45f4(auStack_70,uVar1);
    uVar2 = FUN_006c482c(auStack_70,auStack_30);
    FUN_006c44d0(auStack_70);
    if ((uVar2 & 1) != 0) break;
    lVar3 = FUN_006c4ae0();
    FUN_006c4240(*(undefined8 *)(lVar3 + 0x18),param_1);
  }
  return local_28;
}


