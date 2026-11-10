/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0350247c; name: FUN_0350247c
 */


void FUN_0350247c(long param_1,uint param_2,ulong param_3,byte param_4,long param_5)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long local_68;
  
  param_3 = param_3 & 0xffffffff;
  while( true ) {
    cVar6 = (char)param_3;
    lVar13 = (long)cVar6;
    lVar10 = param_1 + lVar13 * 0x30;
    local_68 = 0;
    cVar5 = *(char *)(lVar10 + 0xbf);
    lVar10 = lVar10 + 0x98;
    iVar7 = (int)cVar6;
    iVar9 = FUN_03501ad4(lVar10,param_5,&local_68,param_4 & 1,iVar7,param_1,1);
    cVar1 = (char)param_2;
    if (iVar9 == 1) {
      if (((*(char *)(param_1 + (param_3 & 0xff) * 0x30 + 0xbf) == '\0') &&
          (*(short *)(param_1 + (param_3 & 0xff) * 0x30 + 0xc4) == 0)) &&
         (*(short *)(param_1 + 400) == 0)) {
        if (*(char *)(param_1 + lVar13 * 0x30 + 0xbc) == '\0') {
          *(char *)(param_1 + cVar1 + 0x171) = cVar6;
        }
        param_4 = *(char *)(param_1 + lVar13 * 0x30 + 0xbd) != '\0';
        param_5 = local_68;
        param_2 = (uint)param_3;
      }
    }
    else {
      FUN_03501938(lVar10);
      if (cVar5 == '\0') {
        *(char *)(lVar13 + param_1 + 0x171) = cVar6;
        uVar2 = iVar7 + 1;
        if (uVar2 < 4) {
          if ((~param_2 & 0xff) == 0) {
            bVar8 = (*(uint *)(param_1 + 0x158) & 0xf00) == 0x300;
            lVar10 = 0;
            plVar12 = (long *)(param_1 + 0x160);
          }
          else {
            lVar13 = param_1 + (long)cVar1 * 0x30;
            lVar10 = (long)cVar1 + 1;
            plVar12 = (long *)(lVar13 + 0xa8);
            bVar8 = *(char *)(lVar13 + 0xbd) != '\0';
          }
          *(char *)(param_1 + lVar10 + 0x170) = cVar1;
          uVar3 = iVar7 + 1;
          uVar4 = (ulong)uVar3;
          if (uVar3 < 4) {
            uVar4 = 3;
          }
          lVar10 = param_1 + (ulong)uVar3 * 0x30 + 0x98;
          uVar11 = (ulong)uVar2;
          do {
            *(char *)(param_1 + uVar11 + 0x171) = (char)uVar11;
            uVar11 = uVar11 + 1;
            FUN_03501938(lVar10);
            *(undefined1 *)(lVar10 + 0x28) = 0;
            lVar10 = lVar10 + 0x30;
          } while (uVar4 + 1 != uVar11);
          if ((int)plVar12[1] != 0) {
            lVar10 = *plVar12;
            do {
              FUN_0350247c(param_1,param_2,(ulong)uVar2,bVar8,lVar10);
              lVar10 = lVar10 + 0x30;
            } while (lVar10 != *plVar12 + (ulong)*(uint *)(plVar12 + 1) * 0x30);
          }
        }
        return;
      }
    }
    param_3 = (ulong)(uint)(int)(char)(cVar6 + '\x01');
    if (3 < (char)(cVar6 + '\x01')) break;
    if (param_5 == 0) {
      return;
    }
  }
  return;
}


