/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031dd260; name: FUN_031dd260
 */


bool FUN_031dd260(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  while( true ) {
    uVar1 = (uint)*param_1;
    if ((uVar1 >> 0xd & 1) != 0) break;
    if ((*param_1 & 1) != 0) {
      return false;
    }
    param_1 = (ulong *)param_1[1];
    if (param_1 == (ulong *)0x0) {
      return false;
    }
  }
  if (param_1 == (ulong *)0x0) {
    return false;
  }
  uVar1 = uVar1 & 0x1fff;
  uVar3 = (ulong)(byte)(POPCOUNT((char)uVar1) + POPCOUNT((char)(uVar1 >> 8)));
  if (param_1[uVar3 + 2] == 0) {
    return false;
  }
  while( true ) {
    uVar1 = (uint)*param_2;
    if ((uVar1 >> 0xd & 1) != 0) break;
    if (((*param_2 & 1) != 0) || (param_2 = (ulong *)param_2[1], param_2 == (ulong *)0x0))
    goto LAB_031dd2ec;
  }
  if (param_2 != (ulong *)0x0) {
    uVar1 = uVar1 & 0x1fff;
    param_2 = param_2 + (ulong)(byte)(POPCOUNT((char)uVar1) + POPCOUNT((char)(uVar1 >> 8))) + 2;
    goto LAB_031dd2f8;
  }
LAB_031dd2ec:
  param_2 = (ulong *)0x0;
LAB_031dd2f8:
  while( true ) {
    DataMemoryBarrier(2,1);
    uVar1 = (uint)*param_2;
    if (((DAT_04884450 & 1) == 0) || ((((uint)param_1[uVar3 + 2] ^ uVar1) & 3) == 0)) break;
    DataMemoryBarrier(2,2);
    Yield();
  }
  iVar2 = (int)(param_1[uVar3 + 2] >> 0x11);
  return (int)(*param_2 >> 0x11) <= iVar2 && iVar2 <= (int)(uVar1 >> 2 & 0x7fff);
}


