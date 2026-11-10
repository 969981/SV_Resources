/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006c397c; name: FUN_006c397c
 */


void FUN_006c397c(undefined8 *param_1,int param_2,ushort param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)((long)param_1 + 1) = 2;
    uVar1 = nn::socket::InetHtons(param_3);
    *(undefined2 *)((long)param_1 + 2) = uVar1;
    uVar2 = nn::socket::InetHtonl(0);
    *(undefined4 *)((long)param_1 + 4) = uVar2;
    return;
  }
  *(undefined1 *)((long)param_1 + 1) = 0x1c;
  uVar1 = nn::socket::InetHtons(param_3);
  *(undefined2 *)((long)param_1 + 2) = uVar1;
  *(undefined8 *)((long)param_1 + 4) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  return;
}


