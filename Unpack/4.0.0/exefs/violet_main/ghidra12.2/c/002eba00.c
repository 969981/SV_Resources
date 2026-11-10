/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002eba00; name: FUN_002eba00
 */


undefined8 FUN_002eba00(long param_1,char *param_2)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  char *__s2;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  if (param_1 != 0 && param_2 != (char *)0x0) {
    if (param_2 != (char *)0x0) {
      lVar7 = param_1;
      uVar8 = 0;
      do {
        uVar4 = *(ulong *)(lVar7 + 0x18);
        if (uVar8 == uVar4) {
          do {
            lVar7 = *(long *)(lVar7 + 8);
            if (lVar7 == 0) {
              return 0;
            }
            uVar4 = *(ulong *)(lVar7 + 0x18);
          } while (uVar4 == 0);
          uVar8 = 0;
        }
        uVar2 = uVar8;
        if (uVar8 <= uVar4) {
          uVar2 = uVar4;
        }
        lVar9 = (uVar2 - uVar8) + 1;
        lVar5 = uVar8 * 0x18;
        while( true ) {
          lVar9 = lVar9 + -1;
          lVar1 = lVar5 + 0x18;
          uVar8 = uVar2;
          if (lVar9 == 0) break;
          lVar10 = *(long *)(lVar7 + 0x10);
          __s2 = *(char **)(lVar10 + lVar5);
          if (__s2 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          iVar3 = strcmp(param_2,__s2);
          lVar5 = lVar1;
          if (iVar3 == 0) {
            puVar6 = (undefined8 *)(lVar10 + lVar1 + -0x18);
            goto joined_r0x002ebab4;
          }
        }
      } while( true );
    }
    lVar7 = param_1;
    if (*(long *)(param_1 + 0x18) == 0) {
      do {
        lVar7 = *(long *)(lVar7 + 8);
        if (lVar7 == 0) {
          return 0;
        }
      } while (*(long *)(lVar7 + 0x18) == 0);
    }
    puVar6 = *(undefined8 **)(lVar7 + 0x10);
joined_r0x002ebab4:
    if (puVar6 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x28) = *puVar6;
      return 1;
    }
  }
  return 0;
}


