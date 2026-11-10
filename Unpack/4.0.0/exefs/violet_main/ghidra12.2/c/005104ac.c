/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005104ac; name: FUN_005104ac
 */


undefined8 FUN_005104ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  undefined8 uVar4;
  ulong uVar5;
  char *pcVar6;
  char *pcVar7;
  ulong uVar8;
  undefined2 local_80;
  undefined1 local_7e;
  undefined2 local_68;
  undefined1 local_66;
  
  do {
    local_68 = 0x3e02;
    local_66 = 0;
    bVar3 = *(byte *)(param_1 + 0x30);
    uVar5 = (ulong)(bVar3 >> 1);
    uVar8 = uVar5;
    if ((bVar3 & 1) != 0) {
      uVar8 = *(ulong *)(param_1 + 0x38);
    }
    if (uVar8 == 1) {
      if ((bVar3 & 1) == 0) {
        if (*(char *)(param_1 + 0x31) == '>') {
          pcVar6 = (char *)((ulong)&local_68 | 2);
          pcVar7 = (char *)(param_1 + 0x32);
          uVar8 = uVar5;
          do {
            uVar8 = uVar8 - 1;
            if (uVar8 == 0) goto LAB_005105d8;
            cVar1 = *pcVar6;
            cVar2 = *pcVar7;
            pcVar6 = pcVar6 + 1;
            pcVar7 = pcVar7 + 1;
          } while (cVar2 == cVar1);
        }
        local_80 = 0x7d02;
        local_7e = 0;
        if ((bVar3 & 1) == 0) {
          if (*(char *)(param_1 + 0x31) == '}') {
            pcVar6 = (char *)((ulong)&local_80 | 2);
            pcVar7 = (char *)(param_1 + 0x32);
            do {
              uVar5 = uVar5 - 1;
              if (uVar5 == 0) goto LAB_005105d8;
              cVar1 = *pcVar6;
              cVar2 = *pcVar7;
              pcVar6 = pcVar6 + 1;
              pcVar7 = pcVar7 + 1;
            } while (cVar2 == cVar1);
          }
          goto LAB_005104f8;
        }
      }
      else if (**(char **)(param_1 + 0x40) == '>') goto LAB_005105d8;
      local_7e = 0;
      local_80 = 0x7d02;
      if (**(char **)(param_1 + 0x40) == '}') {
LAB_005105d8:
        uVar4 = FUN_0050d96c(param_1,param_3);
        return uVar4;
      }
    }
LAB_005104f8:
    local_7e = 0;
    local_80 = 0x7d02;
    uVar8 = FUN_0050b588(param_1,param_2);
    if ((uVar8 & 1) == 0) {
      return 0;
    }
  } while( true );
}


