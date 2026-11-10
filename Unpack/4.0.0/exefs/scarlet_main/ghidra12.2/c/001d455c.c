/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001d455c; name: FUN_001d455c
 */


undefined8 FUN_001d455c(long *param_1,uint param_2,char *param_3)

{
  long lVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  
  lVar7 = *param_1;
  bVar4 = (param_2 & 1) == 0;
  lVar1 = lVar7 + 0x1268;
  if (bVar4) {
    lVar1 = lVar7 + 0x1248;
  }
  lVar2 = 0x1620;
  if (bVar4) {
    lVar2 = 0x1628;
  }
  if (*param_3 != '\0') {
    do {
      iVar5 = thunk_FUN_001e0a34("Digest",param_3,6);
      if (iVar5 == 0) {
        iVar5 = thunk_FUN_001e0a34("Basic",param_3,5);
        if (iVar5 == 0) {
          iVar5 = thunk_FUN_001e0a34("Bearer",param_3,6);
          if (iVar5 == 0) goto LAB_001d46c4;
          *(ulong *)(lVar7 + lVar2) = *(ulong *)(lVar7 + lVar2) | 0x40;
          uVar6 = *(ulong *)(lVar1 + 0x10) | 0x40;
          bVar4 = *(long *)(lVar1 + 8) == 0x40;
        }
        else {
          *(ulong *)(lVar7 + lVar2) = *(ulong *)(lVar7 + lVar2) | 1;
          uVar6 = *(ulong *)(lVar1 + 0x10) | 1;
          bVar4 = *(long *)(lVar1 + 8) == 1;
        }
        *(ulong *)(lVar1 + 0x10) = uVar6;
        if (bVar4) {
          *(undefined8 *)(lVar1 + 0x10) = 0;
LAB_001d46a0:
          FUN_001db818(lVar7,"Authentication problem. Ignoring this.\n");
          *(ushort *)(lVar7 + 0x15a4) = *(ushort *)(lVar7 + 0x15a4) | 0x20;
        }
      }
      else if ((*(byte *)(lVar1 + 0x10) >> 1 & 1) == 0) {
        uVar6 = FUN_001e9810();
        if ((uVar6 & 1) != 0) {
          *(ulong *)(lVar7 + lVar2) = *(ulong *)(lVar7 + lVar2) | 2;
          *(ulong *)(lVar1 + 0x10) = *(ulong *)(lVar1 + 0x10) | 2;
          iVar5 = FUN_001cb010(param_1,param_2 & 1,param_3);
          if (iVar5 != 0) goto LAB_001d46a0;
        }
      }
      else {
        FUN_001db818(lVar7,"Ignoring duplicate digest auth header.\n");
      }
LAB_001d46c4:
      for (; (cVar3 = *param_3, cVar3 != '\0' && (cVar3 != ',')); param_3 = param_3 + 1) {
      }
      if (cVar3 == ',') {
        param_3 = param_3 + 1;
      }
      cVar3 = *param_3;
      while( true ) {
        if (cVar3 == '\0') {
          return 0;
        }
        iVar5 = FUN_001cb268(cVar3);
        if (iVar5 == 0) break;
        param_3 = param_3 + 1;
        cVar3 = *param_3;
      }
    } while (*param_3 != '\0');
  }
  return 0;
}


