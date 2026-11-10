/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f7d58c; name: FUN_00f7d58c
 */


undefined1 FUN_00f7d58c(long param_1,long param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 uStack_34;
  char local_33;
  
  *param_3 = 0;
  FUN_00f7de94(&uStack_34,auStack_38,auStack_3c,param_1,param_2);
  if ((*(byte *)(*(long *)(param_1 + 0x38) + 0x49c) >> 1 & 1) != 0) {
    cVar2 = '\x01';
    if (local_33 == '\0') {
      *param_3 = 1;
      cVar2 = '\0';
    }
    goto LAB_00f7d6dc;
  }
  cVar2 = FUN_00f7d748(param_2,&uStack_34);
  if (cVar2 == '\x02') {
    lVar7 = *(long *)(param_1 + 0x38);
    if ((*(char *)(lVar7 + 0x710) != '\0') || (*(short *)(param_1 + 0x8c) == 0)) {
LAB_00f7d61c:
      uVar5 = FUN_00f7d738(*(undefined4 *)(param_2 + 0x36c),*(undefined4 *)(lVar7 + 0x30));
      if ((uVar5 & 1) == 0) {
        cVar2 = '\x02';
        goto LAB_00f7d6dc;
      }
      cVar2 = FUN_00f7ecd8(&uStack_34,param_2);
      if (cVar2 == '\x02') {
        *param_3 = 2;
        cVar2 = FUN_00f7f160(param_2,&uStack_34,auStack_38);
        if (cVar2 == '\x02') {
          FUN_0292361c(auStack_44,auStack_4c,param_2,0);
          FUN_0292361c(auStack_40,auStack_48,param_2,1);
          cVar2 = FUN_029239ac(param_2,auStack_4c);
          if (cVar2 == '\x02') {
            cVar2 = FUN_02923a5c(param_2,auStack_44);
          }
        }
        goto LAB_00f7d6dc;
      }
      goto LAB_00f7d6d4;
    }
    cVar2 = FUN_00f7e520(auStack_3c,param_2);
    if (cVar2 == '\x02') {
      lVar7 = *(long *)(param_1 + 0x38);
      goto LAB_00f7d61c;
    }
    uVar1 = 2;
  }
  else {
LAB_00f7d6d4:
    uVar1 = 1;
  }
  *param_3 = uVar1;
LAB_00f7d6dc:
  if (cVar2 == '\x02') {
    uVar1 = 2;
  }
  else {
    uVar4 = FUN_0159fe8c(param_1);
    uVar6 = FUN_00f7e27c(param_2);
    cVar3 = FUN_00f7e3e0(uVar6,uVar4);
    uVar1 = cVar2 == cVar3;
  }
  return uVar1;
}


