/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0348d674; name: FUN_0348d674
 */


long * FUN_0348d674(long *param_1,long *param_2,long param_3,undefined8 param_4,int param_5,
                   undefined1 *param_6)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  
  *param_6 = 0;
  uVar3 = (**(code **)(*param_1 + 0x50))(param_1,param_3);
  if ((uVar3 & 1) != 0) {
    if (param_2 != (long *)0x0) {
      uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
      if (((uVar3 & 1) != 0) && ((*(uint *)(param_3 + 0x2c) | 2) == 3)) {
        FUN_03494c5c(param_2,param_1,param_3,param_4,param_5);
      }
      if (param_2[2] != 0) {
        return param_2;
      }
    }
    if ((param_5 == 0) || (*(int *)(param_3 + 0x2c) != 0)) {
      iVar2 = (int)param_1[3];
      if (iVar2 == 2) {
        plVar4 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0xc0);
        if (plVar4 == (long *)0x0) {
          return (long *)0x0;
        }
        memset(plVar4 + 1,0,0x48);
        *(undefined2 *)(plVar4 + 10) = 0xffff;
        plVar4[0x10] = 0;
        plVar4[0x11] = 0;
        *(undefined8 *)((long)plVar4 + 0x54) = 0;
        *(undefined1 *)(plVar4 + 0x12) = 0;
        plVar4[0xc] = 0;
        plVar4[0xd] = 0x7fffffff00000000;
        plVar4[0xe] = 0;
        plVar4[0xf] = 0x100000000;
        *plVar4 = (long)(PTR_DAT_047e7220 + 0x10);
        *(undefined1 *)((long)plVar4 + 0xbc) = 0;
      }
      else if (iVar2 == 1) {
        plVar4 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,200);
        if (plVar4 == (long *)0x0) {
          return (long *)0x0;
        }
        memset(plVar4 + 1,0,0x48);
        *(undefined2 *)(plVar4 + 10) = 0xffff;
        plVar4[0x10] = 0;
        plVar4[0x11] = 0;
        *(undefined8 *)((long)plVar4 + 0x54) = 0;
        plVar4[0xc] = 0;
        plVar4[0xd] = 0x7fffffff00000000;
        plVar4[0xe] = 0;
        plVar4[0xf] = 0x100000000;
        puVar1 = PTR_DAT_047e7228 + 0x10;
        *(undefined1 *)(plVar4 + 0x12) = 0;
        *plVar4 = (long)puVar1;
      }
      else {
        if (iVar2 != 0) {
          return (long *)0x0;
        }
        plVar4 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0xf8);
        if (plVar4 == (long *)0x0) {
          return (long *)0x0;
        }
        memset(plVar4 + 1,0,0x48);
        *(undefined2 *)(plVar4 + 10) = 0xffff;
        plVar4[0x10] = 0;
        plVar4[0x11] = 0;
        *(undefined8 *)((long)plVar4 + 0x54) = 0;
        *(undefined1 *)(plVar4 + 0x12) = 0;
        plVar4[0xc] = 0;
        plVar4[0xd] = 0x7fffffff00000000;
        plVar4[0xe] = 0;
        plVar4[0xf] = 0x100000000;
        *plVar4 = (long)(PTR_DAT_047e7218 + 0x10);
        *(undefined1 *)(plVar4 + 0x1e) = 0;
        plVar4[0x1a] = 0;
        plVar4[0x1b] = 0;
        plVar4[0x1c] = 0;
        plVar4[0x1d] = 0;
      }
      FUN_03494c5c(plVar4,param_1,param_3,param_4,param_5);
      *param_6 = 1;
      return plVar4;
    }
  }
  return (long *)0x0;
}


