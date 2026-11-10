/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c40774; name: FUN_00c40774
 */


undefined8 FUN_00c40774(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  undefined8 uVar4;
  ulong uVar5;
  char *pcVar6;
  ulong uVar7;
  char *pcVar8;
  undefined2 local_80;
  undefined1 local_7e;
  undefined2 local_68;
  undefined1 local_66;
  
  do {
    local_68 = 0x3e02;
    local_66 = 0;
    bVar3 = *(byte *)(param_1 + 0x30);
    uVar5 = (ulong)(bVar3 >> 1);
    uVar7 = uVar5;
    if ((bVar3 & 1) != 0) {
      uVar7 = *(ulong *)(param_1 + 0x38);
    }
    if (uVar7 == 1) {
      if ((bVar3 & 1) == 0) {
        if (*(char *)(param_1 + 0x31) == '>') {
          pcVar6 = (char *)((ulong)&local_68 | 2);
          pcVar8 = (char *)(param_1 + 0x32);
          uVar7 = uVar5;
          do {
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) goto LAB_00c4089c;
            cVar1 = *pcVar6;
            cVar2 = *pcVar8;
            pcVar6 = pcVar6 + 1;
            pcVar8 = pcVar8 + 1;
          } while (cVar2 == cVar1);
        }
        local_80 = 0x7d02;
        local_7e = 0;
        if (*(char *)(param_1 + 0x31) == '}') {
          pcVar6 = (char *)((ulong)&local_80 | 2);
          pcVar8 = (char *)(param_1 + 0x32);
          do {
            uVar5 = uVar5 - 1;
            if (uVar5 == 0) goto LAB_00c4089c;
            cVar1 = *pcVar6;
            cVar2 = *pcVar8;
            pcVar6 = pcVar6 + 1;
            pcVar8 = pcVar8 + 1;
          } while (cVar2 == cVar1);
        }
      }
      else if ((**(char **)(param_1 + 0x40) == '>') || (**(char **)(param_1 + 0x40) == '}')) {
LAB_00c4089c:
        uVar4 = FUN_00c3caf8(param_1,param_3);
        return uVar4;
      }
    }
    else {
      local_80 = 0x7d02;
      local_7e = 0;
    }
    uVar7 = FUN_00c386c4(param_1,param_2);
    if ((uVar7 & 1) == 0) {
      return 0;
    }
  } while( true );
}


