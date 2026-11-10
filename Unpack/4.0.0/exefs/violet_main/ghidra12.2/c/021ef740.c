/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021ef740; name: FUN_021ef740
 */


void FUN_021ef740(long param_1,undefined8 param_2,uint *param_3)

{
  undefined2 uVar1;
  uint uVar2;
  ulong uVar3;
  
  *(ulong *)(param_1 + 0x20) = (ulong)*param_3;
  *(undefined2 *)(param_1 + 0x2e) = 1;
  FUN_021efd4c();
  FUN_021efdb4(param_1,param_2,*(undefined8 *)(param_3 + 6));
  FUN_021efe44(param_1,param_2,*(undefined8 *)(param_3 + 6));
  FUN_021efeb8(param_1,param_2);
  FUN_021eff14(param_1,param_2);
  if ((*(char *)((long)param_3 + 0x11) != '\0') && (*(short *)(param_1 + 0x2a) != 0)) {
    if ((*(short *)(param_1 + 0x28) == 0xc2) || (*(short *)(param_1 + 0x28) == 0x80)) {
      *(undefined2 *)(param_1 + 0x2a) = 0;
    }
  }
  FUN_021eff7c(param_1,param_2);
  FUN_021f00b0(param_1,param_2,*(undefined8 *)(param_3 + 6));
  FUN_021f0130(param_1,*(undefined2 *)(param_1 + 0x28),*(undefined2 *)(param_1 + 0x2a),
               *(undefined8 *)(param_3 + 6));
  uVar1 = (**(code **)(param_3 + 6))(0x19);
  *(undefined2 *)(param_1 + 0x32) = uVar1;
  FUN_021f01a0(param_1,param_2,*(undefined8 *)(param_3 + 6));
  FUN_021f0244(param_1,param_2,*(undefined8 *)(param_3 + 6));
  uVar2 = FUN_021ebf50(*(undefined2 *)(param_1 + 0x28),*(undefined2 *)(param_1 + 0x2a));
  *(uint *)(param_1 + 0x50) = uVar2 & 0xff;
  FUN_021f02f8(param_1,param_2);
  FUN_021f0368(param_1,param_2,*(undefined8 *)(param_3 + 6));
  FUN_021f0484(param_1,*(undefined8 *)(param_3 + 6));
  FUN_021f051c(param_1,*(undefined8 *)(param_3 + 6));
  FUN_021f0584(param_1,param_2);
  uVar3 = (**(code **)(param_3 + 6))(0xffffffff);
  *(ulong *)(param_1 + 0x10) = uVar3 & 0xffffffff;
  FUN_021f06cc(param_1,param_2,(char)param_3[4],*(undefined8 *)(param_3 + 6));
  FUN_021f0768(param_1);
  FUN_021f07e0(param_1,param_2);
  FUN_021f0908(param_1,param_2);
  FUN_021f0938(param_1,param_2);
  FUN_021f09a0(param_1,param_2,*(undefined8 *)(param_3 + 6));
  return;
}


