/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0038d620; name: FUN_0038d620
 */


undefined8 FUN_0038d620(long param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar3 = 0;
  if (param_1 != 0) {
    lVar4 = 0;
    do {
      iVar1 = tolower((uint)*(byte *)(param_1 + lVar4));
      iVar2 = tolower((uint)(byte)(&DAT_03c61aec)[lVar4]);
      if (((lVar4 == -2) || (iVar2 == 0)) || (iVar1 == 0)) break;
      lVar4 = lVar4 + 1;
    } while (iVar1 == iVar2);
    if (iVar1 != iVar2) {
      lVar4 = 0;
      while( true ) {
        iVar1 = tolower((uint)*(byte *)(param_1 + lVar4));
        iVar2 = tolower((uint)(byte)(&DAT_03c2bfae)[lVar4]);
        if ((lVar4 == -2) || (iVar2 == 0)) break;
        if ((iVar1 == 0) || (lVar4 = lVar4 + 1, iVar1 != iVar2)) break;
      }
      if (iVar1 == iVar2) goto LAB_0038d8f8;
      lVar4 = 0;
      while( true ) {
        iVar1 = tolower((uint)*(byte *)(param_1 + lVar4));
        iVar2 = tolower((uint)(byte)(&DAT_03be69bd)[lVar4]);
        if ((lVar4 == -2) || (iVar2 == 0)) break;
        if ((iVar1 == 0) || (lVar4 = lVar4 + 1, iVar1 != iVar2)) break;
      }
      if (iVar1 != iVar2) {
        lVar4 = 0;
        do {
          iVar1 = tolower((uint)*(byte *)(param_1 + lVar4));
          iVar2 = tolower((uint)(byte)(&DAT_03bec811)[lVar4]);
          if (((lVar4 == -2) || (iVar2 == 0)) || (iVar1 == 0)) break;
          lVar4 = lVar4 + 1;
        } while (iVar1 == iVar2);
        if (iVar1 == iVar2) goto LAB_0038d8f8;
        lVar4 = 0;
        while( true ) {
          iVar1 = tolower((uint)*(byte *)(param_1 + lVar4));
          iVar2 = tolower((uint)(byte)(&DAT_03c38de7)[lVar4]);
          if ((lVar4 == -2) || (iVar2 == 0)) break;
          if ((iVar1 == 0) || (lVar4 = lVar4 + 1, iVar1 != iVar2)) break;
        }
        if (iVar1 != iVar2) {
          lVar4 = 0;
          while( true ) {
            iVar1 = tolower((uint)*(byte *)(param_1 + lVar4));
            iVar2 = tolower((uint)(byte)"false"[lVar4]);
            if ((lVar4 == -2) || (iVar2 == 0)) break;
            if ((iVar1 == 0) || (lVar4 = lVar4 + 1, iVar1 != iVar2)) break;
          }
          if (iVar1 == iVar2) goto LAB_0038d8f8;
          lVar4 = 0;
          do {
            iVar1 = tolower((uint)*(byte *)(param_1 + lVar4));
            iVar2 = tolower((uint)(byte)(&DAT_03bf41a8)[lVar4]);
            if (((lVar4 == -2) || (iVar2 == 0)) || (iVar1 == 0)) break;
            lVar4 = lVar4 + 1;
          } while (iVar1 == iVar2);
          if (iVar1 != iVar2) {
            lVar4 = 0;
            while( true ) {
              iVar1 = tolower((uint)*(byte *)(param_1 + lVar4));
              iVar2 = tolower((uint)(byte)(&DAT_03c4d2b5)[lVar4]);
              if ((lVar4 == -2) || (iVar2 == 0)) break;
              if ((iVar1 == 0) || (lVar4 = lVar4 + 1, iVar1 != iVar2)) break;
            }
            if (iVar1 == iVar2) {
LAB_0038d8f8:
              *param_2 = 0;
              return 1;
            }
            lVar4 = 0;
            while( true ) {
              iVar1 = tolower((uint)*(byte *)(param_1 + lVar4));
              iVar2 = tolower((uint)(byte)(&DAT_03bed47a)[lVar4]);
              if ((lVar4 == -2) || (iVar2 == 0)) break;
              if ((iVar1 == 0) || (lVar4 = lVar4 + 1, iVar1 != iVar2)) break;
            }
            if (iVar1 != iVar2) {
              lVar4 = 0;
              do {
                iVar1 = tolower((uint)*(byte *)(param_1 + lVar4));
                iVar2 = tolower((uint)(byte)(&DAT_03c2bfb0)[lVar4]);
                if (((lVar4 == -2) || (iVar2 == 0)) || (iVar1 == 0)) break;
                lVar4 = lVar4 + 1;
              } while (iVar1 == iVar2);
              if (iVar1 != iVar2) {
                return 0;
              }
              goto LAB_0038d8f8;
            }
          }
        }
      }
    }
    uVar3 = 1;
    *param_2 = 1;
  }
  return uVar3;
}


