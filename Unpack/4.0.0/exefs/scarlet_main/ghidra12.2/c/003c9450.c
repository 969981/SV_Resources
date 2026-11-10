/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003c9450; name: FUN_003c9450
 */


undefined8 FUN_003c9450(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int *piVar7;
  long lVar8;
  
  lVar3 = FUN_003b1d10(param_1,param_2,0);
  if (lVar3 == 0) {
    uVar6 = 0x53f;
    uVar5 = 0xf8;
  }
  else {
    iVar2 = FUN_003d6cf0(param_1,lVar3,0x10003,1);
    if (iVar2 == 0) {
      uVar5 = FUN_003b4510(param_1);
      iVar2 = FUN_0047e200(uVar5,lVar3);
      if (iVar2 < 0) {
        uVar5 = 0x105;
        uVar6 = 0x551;
      }
      else {
        piVar7 = *(int **)(param_1 + 8);
        uVar1 = *(uint *)(*(long *)(piVar7 + 0x30) + 0x60);
        if (((((uVar1 >> 3 & 1) == 0) && (0x303 < *piVar7)) && (*piVar7 != 0x10000)) &&
           ((lVar8 = *(long *)(*(long *)(param_1 + 0xa8) + 0x238), lVar8 != 0 &&
            (*(int *)(lVar8 + 0x18) != *(int *)(lVar3 + 0x18))))) {
          uVar5 = 0x105;
          uVar6 = 0x559;
        }
        else {
          lVar8 = *(long *)(param_1 + 0x5d0);
          if (*(long *)(lVar8 + 0x1f0) != 0) {
            *(ulong *)(lVar8 + 0x1f8) = (ulong)*(uint *)(*(long *)(lVar8 + 0x1f0) + 0x18);
          }
          if ((*(int *)(param_1 + 200) == 0) ||
             (*(ulong *)(lVar8 + 0x1f8) == (ulong)*(uint *)(lVar3 + 0x18))) {
LAB_003c9558:
            *(long *)(*(long *)(param_1 + 0xa8) + 0x238) = lVar3;
            return 1;
          }
          if (((uVar1 >> 3 & 1) == 0) && ((0x303 < *piVar7 && (*piVar7 != 0x10000)))) {
            lVar8 = FUN_003b00f0(*(undefined4 *)(lVar3 + 0x40));
            lVar4 = FUN_003b00f0(*(undefined4 *)
                                  (*(long *)(*(long *)(param_1 + 0x5d0) + 0x1f0) + 0x40));
            if (lVar8 == lVar4) goto LAB_003c9558;
            uVar5 = 0xda;
            uVar6 = 0x56e;
          }
          else {
            uVar5 = 0xc5;
            uVar6 = 0x577;
          }
        }
      }
    }
    else {
      uVar5 = 0x105;
      uVar6 = 0x548;
    }
  }
  FUN_003c3950(param_1,0x2f,0x21c,uVar5,"external/openssl/ssl/statem/statem_clnt.c",uVar6);
  return 0;
}


