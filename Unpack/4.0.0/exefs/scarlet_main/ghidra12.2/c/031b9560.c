/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031b9560; name: FUN_031b9560
 */


void FUN_031b9560(char *param_1,int param_2,long *param_3)

{
  byte *__src;
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  char local_48 [4];
  char local_44 [4];
  char local_28 [4];
  byte local_24 [4];
  
  if (0 < param_2) {
    uVar6 = 0;
    do {
      pcVar5 = (char *)*param_3;
      lVar1 = param_3[1];
      if (lVar1 - (long)pcVar5 == 0 || lVar1 < (long)pcVar5) {
        plVar3 = (long *)param_3[7];
        if (plVar3 == (long *)0x0) {
          memcpy(local_48,pcVar5,lVar1 - (long)pcVar5);
          *param_3 = lVar1;
        }
        else {
          (**(code **)(*plVar3 + 0x38))(plVar3,param_3,local_48,1);
        }
      }
      else {
        local_48[0] = *pcVar5;
        *param_3 = (long)(pcVar5 + 1);
      }
      *param_1 = local_48[0];
      pcVar5 = (char *)*param_3;
      lVar1 = param_3[1];
      if (lVar1 - (long)pcVar5 == 0 || lVar1 < (long)pcVar5) {
        plVar3 = (long *)param_3[7];
        if (plVar3 == (long *)0x0) {
          memcpy(local_44,pcVar5,lVar1 - (long)pcVar5);
          *param_3 = lVar1;
        }
        else {
          (**(code **)(*plVar3 + 0x38))(plVar3,param_3,local_44,1);
        }
      }
      else {
        local_44[0] = *pcVar5;
        *param_3 = (long)(pcVar5 + 1);
      }
      param_1[1] = local_44[0];
      pcVar5 = (char *)*param_3;
      lVar1 = param_3[1];
      if (lVar1 - (long)pcVar5 == 0 || lVar1 < (long)pcVar5) {
        plVar3 = (long *)param_3[7];
        if (plVar3 == (long *)0x0) {
          memcpy(local_28,pcVar5,lVar1 - (long)pcVar5);
          *param_3 = lVar1;
        }
        else {
          (**(code **)(*plVar3 + 0x38))(plVar3,param_3,local_28,1);
        }
      }
      else {
        local_28[0] = *pcVar5;
        *param_3 = (long)(pcVar5 + 1);
      }
      param_1[2] = local_28[0];
      __src = (byte *)*param_3;
      lVar1 = param_3[1];
      if (lVar1 - (long)__src == 0 || lVar1 < (long)__src) {
        plVar3 = (long *)param_3[7];
        if (plVar3 == (long *)0x0) {
          memcpy(local_24,__src,lVar1 - (long)__src);
          *param_3 = lVar1;
        }
        else {
          (**(code **)(*plVar3 + 0x38))(plVar3,param_3,local_24,1);
        }
      }
      else {
        local_24[0] = *__src;
        *param_3 = (long)(__src + 1);
      }
      param_1[3] = local_24[0];
      if (((*param_1 == '\x01') && (param_1[1] == '\x01')) && (param_1[2] == '\x01')) {
        iVar4 = (uint)local_24[0] << (ulong)(uVar6 & 0x1f);
        if (0 < iVar4) {
          uVar2 = *(undefined4 *)(param_1 + -4);
          iVar4 = iVar4 + 1;
          pcVar5 = param_1;
          do {
            iVar4 = iVar4 + -1;
            param_2 = param_2 + -1;
            param_1 = pcVar5 + 4;
            *(undefined4 *)pcVar5 = uVar2;
            pcVar5 = param_1;
          } while (1 < iVar4);
        }
        uVar6 = uVar6 + 8;
      }
      else {
        uVar6 = 0;
        param_1 = param_1 + 4;
        param_2 = param_2 + -1;
      }
    } while (0 < param_2);
  }
  return;
}


