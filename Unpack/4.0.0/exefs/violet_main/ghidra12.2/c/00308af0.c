/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00308af0; name: FUN_00308af0
 */


void FUN_00308af0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  ulong uVar9;
  undefined1 auStack_80 [32];
  char local_54 [4];
  
  if (*(long *)(param_2 + 0x160) != 0) {
    puVar5 = (undefined8 *)**(long **)(param_2 + 0x158);
    **(long **)(param_2 + 0x158) = 0;
    if (puVar5 != (undefined8 *)0x0) {
                    /* try { // try from 00308b30 to 00308b33 has its CatchHandler @ 00308d90 */
      (**(code **)*puVar5)();
    }
    if (((*(char *)(param_2 + 0x1d0) == '\0') || (*(char *)(param_2 + 0x1b3) == '\0')) ||
       (FUN_00368510(param_2 + 0x658), *(char *)(param_2 + 0x788) != '\0')) {
      cVar4 = *(char *)(param_2 + 0x788);
    }
    else {
      FUN_00368510(param_2 + 0x798);
      cVar4 = *(char *)(param_2 + 0x788);
    }
    if (cVar4 == '\0') {
      lVar1 = param_2 + 0x798;
      lVar2 = param_2 + 0x658;
      do {
        if (*(long *)(param_2 + 0x7b8) == 0) {
          if (*(long *)(param_2 + 0x678) == 0) break;
          FUN_00368930(lVar1,lVar2);
          *(undefined1 *)(param_2 + 0xac0) = 0;
          iVar8 = *(int *)(param_2 + 0xabc);
          if (iVar8 != 1) goto LAB_00308c40;
LAB_00308bec:
          uVar9 = FUN_0030f520(param_2 + 0x908,param_2,lVar1,0,*(undefined8 *)(param_2 + 0x158));
        }
        else {
          if ((*(char *)(param_2 + 0xac0) != '\0') ||
             (iVar8 = *(int *)(param_2 + 0xabc), iVar8 == 1)) goto LAB_00308bec;
LAB_00308c40:
          if (*(long *)(param_2 + 0xc38) != 0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          lVar6 = *(long *)(param_2 + 0xc10);
          if (lVar6 == 0) {
            lVar6 = FUN_0034d600(iVar8);
            *(long *)(param_2 + 0xc10) = lVar6;
          }
          uVar9 = FUN_0034d5f0(lVar6,lVar1,param_2 + 0xc18,0,5 - *(long *)(param_2 + 0xac8),local_54
                              );
          if ((uVar9 & 1) == 0) {
            FUN_00368510(lVar2);
            FUN_00368510(lVar1);
            FUN_003673f0(auStack_80,"Stream decompression error.");
            uVar9 = FUN_00351340("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                                 ,0x786,auStack_80,0,0);
          }
          else {
            lVar6 = *(long *)(param_2 + 0xac8) + *(long *)(param_2 + 0xc38);
            lVar3 = 0;
            if (lVar6 != 5) {
              lVar3 = lVar6;
            }
            *(long *)(param_2 + 0xac8) = lVar3;
            uVar9 = FUN_0030f520(param_2 + 0x908,param_2,param_2 + 0xc18,0,
                                 *(undefined8 *)(param_2 + 0x158));
            if (local_54[0] != '\0') {
              FUN_0034d640(*(undefined8 *)(param_2 + 0xc10));
              *(undefined8 *)(param_2 + 0xc10) = 0;
            }
          }
        }
        if (uVar9 != 0) {
          *(undefined1 *)(param_2 + 0x1b3) = 1;
          FUN_00368510(lVar2);
          FUN_00368510(lVar1);
          *(undefined8 *)(param_2 + 0x790) = *(undefined8 *)(param_2 + 0x7b8);
          iVar8 = *(int *)(param_2 + 0x1cc);
          goto joined_r0x00308d24;
        }
      } while (**(long **)(param_2 + 0x158) == 0);
    }
    *(undefined8 *)(param_2 + 0x790) = *(undefined8 *)(param_2 + 0x7b8);
    if (**(long **)(param_2 + 0x158) == 0) {
      uVar9 = 0;
      iVar8 = *(int *)(param_2 + 0x1cc);
joined_r0x00308d24:
      if (iVar8 != 0) {
        puVar5 = (undefined8 *)**(long **)(param_2 + 0x158);
        **(long **)(param_2 + 0x158) = 0;
        if (puVar5 != (undefined8 *)0x0) {
                    /* try { // try from 00308d40 to 00308d43 has its CatchHandler @ 00308d8c */
          (**(code **)*puVar5)();
        }
        uVar7 = *(undefined8 *)(param_2 + 0x160);
        *(undefined8 *)(param_2 + 0x160) = 0;
        FUN_0035351c(auStack_80,uVar7,0);
      }
      if (4 < uVar9) {
        FUN_00350fd0(uVar9);
      }
    }
    else {
      uVar7 = *(undefined8 *)(param_2 + 0x160);
      *(undefined8 *)(param_2 + 0x160) = 0;
      FUN_0035351c(auStack_80,uVar7,0);
    }
  }
  return;
}


