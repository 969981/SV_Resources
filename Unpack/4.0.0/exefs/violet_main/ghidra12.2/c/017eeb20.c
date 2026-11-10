/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017eeb20; name: FUN_017eeb20
 */


void FUN_017eeb20(long param_1,long *param_2)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = FUN_017eeb98(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2);
  if (cVar1 == -1) {
    uVar2 = (**(code **)(*param_2 + 0x98))(param_2);
    FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),0xb4,uVar2,1,1,0x2e8,uVar2 & 0xffff,0);
    return;
  }
  return;
}


