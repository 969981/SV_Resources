/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dc6af4; name: FUN_01dc6af4
 */


void FUN_01dc6af4(long param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  
  if (((uint)param_2 < 0x21) && (param_3 < 0x1e)) {
    uVar2 = param_2 & 0xffffffff;
    uVar1 = FUN_020ebba8(param_1,param_2,param_3,0);
    if (uVar1 != 6) {
      *(undefined2 *)(param_1 + (ulong)uVar1 * 2 + 0x526) = 0xffff;
    }
    uVar1 = FUN_020ebba8(param_1,uVar2,param_3,1);
    if (uVar1 != 6) {
      *(undefined2 *)(param_1 + (ulong)uVar1 * 2 + 0x532) = 0xffff;
    }
    uVar1 = FUN_020ebba8(param_1,uVar2,param_3,2);
    if (uVar1 != 6) {
      *(undefined2 *)(param_1 + (ulong)uVar1 * 2 + 0x53e) = 0xffff;
    }
    uVar1 = FUN_020ebba8(param_1,uVar2,param_3,3);
    if (uVar1 != 6) {
      *(undefined2 *)(param_1 + (ulong)uVar1 * 2 + 0x54a) = 0xffff;
    }
    uVar1 = FUN_020ebba8(param_1,uVar2,param_3,4);
    if (uVar1 != 6) {
      *(undefined2 *)(param_1 + (ulong)uVar1 * 2 + 0x556) = 0xffff;
    }
    uVar1 = FUN_020ebba8(param_1,uVar2,param_3,5);
    if (uVar1 != 6) {
      *(undefined2 *)(param_1 + (ulong)uVar1 * 2 + 0x562) = 0xffff;
    }
  }
  return;
}


