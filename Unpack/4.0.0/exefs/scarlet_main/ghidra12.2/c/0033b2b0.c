/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0033b2b0; name: FUN_0033b2b0
 */


void FUN_0033b2b0(undefined8 param_1,undefined8 *param_2)

{
  char *pcVar1;
  long lVar2;
  ulong uVar3;
  
  FUN_00343a90(param_1,"grpc.subchannel_address");
  pcVar1 = (char *)FUN_00344040();
  if (pcVar1 != (char *)0x0) {
    *(undefined4 *)(param_2 + 0x10) = 0;
    param_2[0xd] = 0;
    param_2[0xc] = 0;
    param_2[0xf] = 0;
    param_2[0xe] = 0;
    param_2[9] = 0;
    param_2[8] = 0;
    param_2[0xb] = 0;
    param_2[10] = 0;
    param_2[5] = 0;
    param_2[4] = 0;
    param_2[7] = 0;
    param_2[6] = 0;
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    if (*pcVar1 == '\0') {
      return;
    }
    lVar2 = FUN_0037b960(pcVar1,0);
    if (lVar2 != 0) {
      uVar3 = FUN_0032f710(lVar2,param_2);
      if ((uVar3 & 1) == 0) {
        *(undefined4 *)(param_2 + 0x10) = 0;
        param_2[0xd] = 0;
        param_2[0xc] = 0;
        param_2[0xf] = 0;
        param_2[0xe] = 0;
        param_2[9] = 0;
        param_2[8] = 0;
        param_2[0xb] = 0;
        param_2[10] = 0;
        param_2[5] = 0;
        param_2[4] = 0;
        param_2[7] = 0;
        param_2[6] = 0;
        param_2[1] = 0;
        *param_2 = 0;
        param_2[3] = 0;
        param_2[2] = 0;
      }
      FUN_0037bfa0(lVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


