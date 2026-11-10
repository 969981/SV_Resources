/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006c39e4; name: FUN_006c39e4
 */


void FUN_006c39e4(undefined4 *param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_2 + 1) == '\x1c') {
    uVar2 = *(undefined4 *)(param_2 + 0x18);
    param_1[4] = 0;
    *param_1 = 1;
    uVar4 = *(undefined8 *)(param_2 + 0x10);
    uVar3 = *(undefined8 *)(param_2 + 8);
    param_1[0xc] = uVar2;
    *(undefined8 *)(param_1 + 10) = uVar4;
    *(undefined8 *)(param_1 + 8) = uVar3;
    return;
  }
  uVar1 = nn::socket::InetNtohl(*(uint *)(param_2 + 4));
  uVar2 = nn::socket::InetHtonl(uVar1);
  *param_1 = 0;
  param_1[4] = uVar2;
  param_1[0xc] = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  return;
}


