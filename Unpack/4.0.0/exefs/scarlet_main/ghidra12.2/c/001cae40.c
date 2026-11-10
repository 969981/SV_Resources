/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001cae40; name: FUN_001cae40
 */


undefined8
FUN_001cae40(long param_1,byte *param_2,size_t param_3,undefined8 *param_4,size_t *param_5)

{
  char *__s;
  size_t sVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  byte bVar6;
  ulong uVar7;
  ulong uVar8;
  char *pcVar9;
  byte local_64 [4];
  
  *param_4 = 0;
  *param_5 = 0;
  if (param_3 == 0) {
    param_3 = strlen((char *)param_2);
  }
  __s = (char *)FUN_001ec2f8((param_3 << 2) / 3 + 4);
  if (__s == (char *)0x0) {
    uVar2 = 0x1b;
  }
  else {
    pcVar9 = __s;
    if (param_3 != 0) {
      do {
        lVar4 = 0;
        iVar3 = 0;
        do {
          if (param_3 == 0) {
            bVar6 = 0;
          }
          else {
            bVar6 = *param_2;
            iVar3 = iVar3 + 1;
            param_3 = param_3 - 1;
            param_2 = param_2 + 1;
          }
          local_64[lVar4] = bVar6;
          lVar4 = lVar4 + 1;
        } while (lVar4 != 3);
        uVar5 = (ulong)(local_64[0] >> 2);
        uVar7 = ((ulong)local_64[0] & 3) << 4 | (ulong)(local_64[1] >> 4);
        uVar8 = ((ulong)local_64[1] & 0xf) << 2 | (ulong)(local_64[2] >> 6);
        if (iVar3 == 2) {
          FUN_001ce394(pcVar9,5,"%c%c%c=",*(undefined1 *)(param_1 + uVar5),
                       *(undefined1 *)(param_1 + uVar7),*(undefined1 *)(param_1 + uVar8));
        }
        else if (iVar3 == 1) {
          FUN_001ce394(pcVar9,5,"%c%c==",*(undefined1 *)(param_1 + uVar5),
                       *(undefined1 *)(param_1 + uVar7));
        }
        else {
          FUN_001ce394(pcVar9,5,"%c%c%c%c",*(undefined1 *)(param_1 + uVar5),
                       *(undefined1 *)(param_1 + uVar7),*(undefined1 *)(param_1 + uVar8),
                       *(undefined1 *)(param_1 + ((ulong)local_64[2] & 0x3f)));
        }
        pcVar9 = pcVar9 + 4;
      } while (param_3 != 0);
    }
    *pcVar9 = '\0';
    *param_4 = __s;
    FUN_001ec308(0);
    sVar1 = strlen(__s);
    uVar2 = 0;
    *param_5 = sVar1;
  }
  return uVar2;
}


