/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b10794; name: FUN_00b10794
 */


void FUN_00b10794(int *param_1,char *param_2,long *param_3)

{
  ushort uVar1;
  long lVar2;
  char cVar3;
  ushort uVar4;
  int local_50 [2];
  int local_48 [2];
  int local_40 [2];
  int local_38 [2];
  
  cVar3 = *param_2;
  if (cVar3 < -0x40) {
    cVar3 = -0x7c;
  }
  *(char *)(*param_3 + param_3[2]) = cVar3;
  lVar2 = param_3[2] + 1;
  param_3[2] = lVar2;
  if (cVar3 == -0x7c) {
    *(char *)(*param_3 + lVar2) = *param_2;
    lVar2 = param_3[2] + 1;
    param_3[2] = lVar2;
  }
  uVar1 = *(ushort *)(param_2 + 2);
  uVar4 = 0xff84;
  if (uVar1 != (short)(char)uVar1) {
    uVar4 = 0xff85;
  }
  if (0xbf < (ushort)(uVar1 + 0x40)) {
    uVar1 = uVar4;
  }
  *(char *)(*param_3 + lVar2) = (char)uVar1;
  lVar2 = param_3[2] + 1;
  param_3[2] = lVar2;
  if ((uVar1 & 0xff) == 0x85) {
    *(undefined2 *)(*param_3 + lVar2) = *(undefined2 *)(param_2 + 2);
    lVar2 = 2;
  }
  else {
    if ((uVar1 & 0xff) != 0x84) goto LAB_00b10874;
    *(char *)(*param_3 + lVar2) = (char)*(undefined2 *)(param_2 + 2);
    lVar2 = 1;
  }
  param_3[2] = param_3[2] + lVar2;
LAB_00b10874:
  FUN_01e63170(local_38,param_2 + 4,param_3);
  if ((((local_38[0] == 0) &&
       (FUN_01e94d28(local_40,param_2 + 8,param_3), local_38[0] = local_40[0], local_40[0] == 0)) &&
      (FUN_01e63170(local_48,param_2 + 0xc,param_3), local_38[0] = local_48[0], local_48[0] == 0))
     && (FUN_01e63170(local_50,param_2 + 0x10,param_3), local_38[0] = local_50[0], local_50[0] == 0)
     ) {
    cVar3 = param_2[0x14];
    if (cVar3 < -0x40) {
      cVar3 = -0x7c;
    }
    *(char *)(*param_3 + param_3[2]) = cVar3;
    lVar2 = param_3[2] + 1;
    param_3[2] = lVar2;
    if (cVar3 == -0x7c) {
      *(char *)(*param_3 + lVar2) = param_2[0x14];
      lVar2 = param_3[2] + 1;
      param_3[2] = lVar2;
    }
    cVar3 = param_2[0x15];
    if (cVar3 < -0x40) {
      cVar3 = -0x7c;
    }
    *(char *)(*param_3 + lVar2) = cVar3;
    lVar2 = param_3[2] + 1;
    param_3[2] = lVar2;
    if (cVar3 == -0x7c) {
      *(char *)(*param_3 + lVar2) = param_2[0x15];
      lVar2 = param_3[2] + 1;
      param_3[2] = lVar2;
    }
    cVar3 = param_2[0x16];
    if (cVar3 < -0x40) {
      cVar3 = -0x7c;
    }
    *(char *)(*param_3 + lVar2) = cVar3;
    lVar2 = param_3[2] + 1;
    param_3[2] = lVar2;
    if (cVar3 == -0x7c) {
      *(char *)(*param_3 + lVar2) = param_2[0x16];
      lVar2 = param_3[2] + 1;
      param_3[2] = lVar2;
    }
    local_38[0] = 0;
    *(undefined1 *)(*param_3 + lVar2) = 0x88;
    lVar2 = param_3[2];
    param_3[2] = lVar2 + 1;
    *(undefined4 *)(*param_3 + lVar2 + 1) = *(undefined4 *)(param_2 + 0x18);
    param_3[2] = param_3[2] + 4;
  }
  *param_1 = local_38[0];
  return;
}


