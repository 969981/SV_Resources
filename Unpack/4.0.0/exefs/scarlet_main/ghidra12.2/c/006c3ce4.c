/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006c3ce4; name: FUN_006c3ce4
 */


undefined8 FUN_006c3ce4(long param_1,byte *param_2,undefined8 param_3)

{
  int iVar1;
  sockaddr *psVar2;
  ulong uVar3;
  ulong uVar4;
  byte *pbVar5;
  uint local_34;
  
  if ((*param_2 & 1) == 0) {
    uVar3 = (ulong)(*param_2 >> 1);
  }
  else {
    uVar3 = *(ulong *)(param_2 + 8);
    if (0x5db < uVar3) {
      *(undefined1 *)(*(long *)(param_2 + 0x10) + 0x5dc) = 0;
      param_2[8] = 0xdc;
      param_2[9] = 5;
      param_2[10] = 0;
      param_2[0xb] = 0;
      param_2[0xc] = 0;
      param_2[0xd] = 0;
      param_2[0xe] = 0;
      param_2[0xf] = 0;
      goto LAB_006c3d44;
    }
  }
                    /* try { // try from 006c3d24 to 006c3d2f has its CatchHandler @ 006c3e40 */
  FUN_00211e24(param_2,0x5dc - uVar3,0);
LAB_006c3d44:
  local_34 = FUN_006c3a60();
  iVar1 = *(int *)(param_1 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar5 = param_2 + 1;
    uVar3 = (ulong)(*param_2 >> 1);
  }
  else {
    uVar3 = *(ulong *)(param_2 + 8);
    pbVar5 = *(byte **)(param_2 + 0x10);
  }
  psVar2 = (sockaddr *)FUN_006c39e0(param_3);
  uVar3 = nn::socket::RecvFrom(iVar1,pbVar5,uVar3,0,psVar2,&local_34);
  if (-1 < (long)uVar3) {
    if ((*param_2 & 1) == 0) {
      uVar4 = (ulong)(*param_2 >> 1);
      if (uVar3 <= uVar4) {
        param_2[uVar3 + 1] = 0;
        *param_2 = (byte)((int)uVar3 << 1);
        return 0;
      }
    }
    else {
      uVar4 = *(ulong *)(param_2 + 8);
      if (uVar3 <= uVar4) {
        *(undefined1 *)(*(long *)(param_2 + 0x10) + uVar3) = 0;
        *(ulong *)(param_2 + 8) = uVar3;
        return 0;
      }
    }
                    /* try { // try from 006c3df0 to 006c3dfb has its CatchHandler @ 006c3e3c */
    FUN_00211e24(param_2,uVar3 - uVar4,0);
    return 0;
  }
  iVar1 = nn::socket::GetLastErrno();
  if (iVar1 != 0x16) {
    if (iVar1 == 0xb) {
      return 2;
    }
    if (iVar1 != 9) {
      return 1;
    }
  }
  return 3;
}


