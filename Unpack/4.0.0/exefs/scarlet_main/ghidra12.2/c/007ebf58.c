/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ebf58; name: FUN_007ebf58
 */


long FUN_007ebf58(long param_1,undefined8 param_2,undefined8 param_3,short param_4,
                 undefined1 *param_5,long param_6)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 local_60;
  undefined4 local_58;
  
  puVar2 = PTR_DAT_047d0860;
  plVar3 = (long *)FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,param_2);
  if ((*(char *)(param_6 + 3) == '\0') && (uVar4 = FUN_00796784(param_2), (uVar4 & 1) != 0)) {
    if (plVar3 != (long *)0x0) {
      if ((short)plVar3[7] != 0) goto LAB_007ebfcc;
      local_58 = 0;
      local_60 = 0x20000000;
      (**(code **)(*plVar3 + 0x18))(plVar3,&local_60);
    }
    lVar5 = 0;
  }
  else {
LAB_007ebfcc:
    lVar5 = FUN_007eadcc(*(undefined8 *)(param_1 + 0x40));
    if (lVar5 == 0) {
      local_60 = 0x200000000;
      local_58 = 0;
      FUN_007eafa0(*(undefined8 *)(param_1 + 0x40),&local_60);
    }
    else {
      FUN_00797134(lVar5);
      *(undefined1 *)(lVar5 + 0x648) = 1;
      FUN_00796828(lVar5 + 0x600,param_2);
      FUN_00797200(lVar5,param_3);
      *(undefined1 *)(lVar5 + 0x621) = *(undefined1 *)(param_6 + 1);
      *(undefined1 *)(lVar5 + 0x622) = *param_5;
      *(undefined1 *)(lVar5 + 0x623) = *(undefined1 *)(param_6 + 3);
      *(undefined1 *)(lVar5 + 0x624) = param_5[1];
      *(undefined1 *)(lVar5 + 0x625) = param_5[2];
      if ((plVar3 != (long *)0x0) && (uVar4 = FUN_00796784(param_2), (uVar4 & 1) != 0)) {
        bVar1 = *(byte *)(plVar3 + 5);
        if (bVar1 != 0xfd && *(char *)(param_6 + 3) == '\0') {
          param_1 = param_1 + ((ulong)(bVar1 >> 3) & 0x1c);
          *(uint *)(param_1 + 0x710) = *(uint *)(param_1 + 0x710) | 1 << (ulong)(bVar1 & 0x1f);
        }
      }
      if (param_4 == 0) {
        lVar6 = FUN_01f7c4e8(*(undefined8 *)puVar2);
        if (*(long *)(lVar6 + 0x98) == 0) {
          *(undefined2 *)(lVar5 + 0x10) = 0;
        }
        else {
          lVar6 = FUN_01f7c4e8(*(undefined8 *)puVar2);
          *(undefined2 *)(lVar5 + 0x10) = *(undefined2 *)(*(long *)(lVar6 + 0x98) + 0x38);
        }
      }
      else {
        *(short *)(lVar5 + 0x10) = param_4;
      }
    }
  }
  return lVar5;
}


