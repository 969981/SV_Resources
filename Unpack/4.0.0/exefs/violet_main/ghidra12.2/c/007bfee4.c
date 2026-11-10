/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007bfee4; name: FUN_007bfee4
 */


/* WARNING: Type propagation algorithm not settling */

long * FUN_007bfee4(long param_1,undefined8 param_2,long *param_3,int param_4,uint param_5)

{
  int iVar1;
  byte bVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  if ((param_3 != (long *)0x0) ||
     (param_3 = (long *)FUN_007c4038(*(undefined8 *)PTR_DAT_047d0fc0), param_3 != (long *)0x0)) {
    if (param_1 == 0) {
      uVar3 = (**(code **)(*param_3 + 0x80))(param_3,4);
    }
    else {
      uVar3 = param_1 + 7;
    }
    uVar3 = uVar3 & 0xfffffffffffffff8;
    if (0x128 < uVar3) {
      plVar4 = (long *)(**(code **)(*param_3 + 0x30))(param_3,uVar3,param_4 << 2);
      if (plVar4 == (long *)0x0) {
        return (long *)0x0;
      }
      iVar1 = -param_4;
      if ((int)param_3[0x11] != -1) {
        iVar1 = param_4;
      }
      if (iVar1 == 1) {
        FUN_007c27ec(plVar4,param_2,param_3,plVar4,uVar3,1,param_5 & 1);
        *(undefined4 *)((long)plVar4 + 0xd4) = 0;
        *plVar4 = (long)(PTR_DAT_047d0ff8 + 0x10);
        plVar4[0x1b] = (long)(plVar4 + 0x1b);
        plVar4[0x1c] = (long)(plVar4 + 0x1b);
        plVar4[0x1f] = (long)(plVar4 + 0x1e);
        plVar4[0x20] = -0x100000000;
        plVar4[0x1d] = -0x100000000;
        plVar4[0x1e] = (long)(plVar4 + 0x1e);
        plVar7 = plVar4;
        if ((*(byte *)(plVar4 + 0x1a) & 1) == 0) {
          *(undefined4 *)((long)plVar4 + 0xec) = 0;
          *(undefined4 *)((long)plVar4 + 0x104) = 0;
          bVar2 = *(byte *)(plVar4 + 0x1a);
        }
        else {
          FUN_007c9e3c(plVar4 + 0x12);
          *(undefined4 *)((long)plVar4 + 0xec) = 0;
          *(undefined4 *)((long)plVar4 + 0x104) = 0;
          FUN_007c9e44(plVar4 + 0x12);
          bVar2 = *(byte *)(plVar4 + 0x1a);
        }
      }
      else {
        plVar7 = (long *)((long)plVar4 + (uVar3 - 0x108));
        FUN_007c27ec(plVar7,param_2,param_3,plVar4,uVar3,iVar1,param_5 & 1);
        *plVar7 = (long)(PTR_DAT_047d0ff8 + 0x10);
        lVar6 = (long)plVar4 + (uVar3 - 0x30);
        *(long *)((long)plVar4 + (uVar3 - 0x30)) = lVar6;
        *(long *)((long)plVar4 + (uVar3 - 0x28)) = lVar6;
        lVar6 = (long)plVar4 + (uVar3 - 0x18);
        *(long *)((long)plVar4 + (uVar3 - 0x10)) = lVar6;
        *(undefined8 *)((long)plVar4 + (uVar3 - 8)) = 0xffffffff00000000;
        *(undefined4 *)((long)plVar4 + (uVar3 - 0x34)) = 0;
        *(undefined8 *)((long)plVar4 + (uVar3 - 0x20)) = 0xffffffff00000000;
        *(long *)((long)plVar4 + (uVar3 - 0x18)) = lVar6;
        if ((*(byte *)((long)plVar4 + (uVar3 - 0x38)) & 1) == 0) {
          *(undefined4 *)((long)plVar4 + (uVar3 - 0x1c)) = 0;
          *(undefined4 *)((long)plVar4 + (uVar3 - 4)) = 0;
          bVar2 = *(byte *)((long)plVar4 + (uVar3 - 0x38));
        }
        else {
          lVar6 = (long)plVar4 + (uVar3 - 0x78);
          FUN_007c9e3c(lVar6);
          *(undefined4 *)((long)plVar4 + (uVar3 - 0x1c)) = 0;
          *(undefined4 *)((long)plVar4 + (uVar3 - 4)) = 0;
          FUN_007c9e44(lVar6);
          bVar2 = *(byte *)((long)plVar4 + (uVar3 - 0x38));
        }
      }
      if ((bVar2 & 1) == 0) {
        plVar4 = (long *)0x0;
        iVar1 = *(int *)((long)plVar7 + 0x88);
      }
      else {
        plVar4 = (long *)((long)plVar7 + 0x90);
        FUN_007c9e3c(plVar4);
        iVar1 = *(int *)((long)plVar7 + 0x88);
      }
      if (iVar1 == 1) {
        plVar5 = (long *)((long)plVar7 + 0x108);
      }
      else {
        plVar5 = *(long **)((long)plVar7 + 0x30);
      }
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      plVar5[3] = 0;
      plVar5[3] = *(long *)((long)plVar7 + 0x38) + -0x128;
      FUN_007c026c(plVar7);
      if (plVar4 != (long *)0x0) {
        FUN_007c9e44(plVar4);
      }
      (**(code **)(*param_3 + 0xc0))(param_3,plVar7);
      return plVar7;
    }
  }
  return (long *)0x0;
}


