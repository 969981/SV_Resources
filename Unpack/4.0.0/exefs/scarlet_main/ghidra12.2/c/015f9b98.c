/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015f9b98; name: FUN_015f9b98
 */


void FUN_015f9b98(long param_1,undefined8 param_2,int param_3,short *param_4)

{
  short *psVar1;
  short *psVar2;
  long lVar3;
  undefined8 local_78;
  undefined4 local_70;
  undefined2 local_6c;
  undefined1 local_6a;
  undefined1 local_69;
  undefined1 uStack_68;
  undefined2 uStack_67;
  undefined1 auStack_60 [24];
  long *local_48;
  long *local_40;
  long local_38;
  int local_2c;
  undefined8 local_28;
  
  if (param_3 != 0) {
    psVar2 = *(short **)(param_1 + 0x4090);
    psVar1 = *(short **)(param_1 + 0x4098);
    if (psVar2 == psVar1) {
LAB_015f9be4:
      if ((((psVar2 != psVar1) && ((char)psVar2[0x44] == '\x02')) && (*(long *)(psVar2 + 0x24) != 0)
          ) && (lVar3 = *(long *)(*(long *)(psVar2 + 0x24) + 0x10), lVar3 != 0)) {
        local_2c = param_3;
        local_28 = param_2;
        FUN_015f9cf8(&local_38,*(undefined8 *)(param_1 + 8),&local_28,&local_2c);
        if (local_38 != 0) {
          FUN_015f9df0(&local_40);
          FUN_0135d26c(auStack_60,&local_40);
          FUN_015fc5ac(psVar2,auStack_60,&local_38);
          if (local_48 != (long *)0x0) {
            (**(code **)(*local_48 + 0x20))();
          }
          uStack_67 = 0;
          uStack_68 = 0x33;
          local_69 = 0x44;
          local_6a = 0x38;
          local_6c = 0x4641;
          local_70 = 0x32374331;
          local_78 = 0x3433313836463846;
          FUN_015fa4e4(lVar3 + -0x28,&local_78,&local_40,&local_38);
          if (local_40 != (long *)0x0) {
            (**(code **)(*local_40 + 0x20))();
          }
        }
        FUN_01751d6c(&local_38);
      }
    }
    else {
      do {
        if (*psVar2 == *param_4) goto LAB_015f9be4;
        psVar2 = psVar2 + 0xe4;
      } while (psVar1 != psVar2);
    }
  }
  return;
}


