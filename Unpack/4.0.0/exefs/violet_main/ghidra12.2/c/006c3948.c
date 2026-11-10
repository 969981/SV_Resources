/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006c3948; name: FUN_006c3948
 */


void FUN_006c3948(undefined8 *param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)((long)param_1 + 1) = 2;
  uVar1 = nn::socket::InetHtons(0);
  *(undefined2 *)((long)param_1 + 2) = uVar1;
  uVar2 = nn::socket::InetHtonl(0);
  *(undefined4 *)((long)param_1 + 4) = uVar2;
  return;
}


