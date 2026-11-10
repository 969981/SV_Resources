/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00506fc0; name: FUN_00506fc0
 */


void FUN_00506fc0(byte *param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  char cVar6;
  long lVar7;
  byte *__dest;
  ulong uVar8;
  undefined8 *puVar9;
  long alStack_218 [48];
  undefined8 local_98 [4];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  local_48 = 0;
  uVar5 = 0;
  iVar2 = 0;
  local_98[2] = param_5;
  local_98[3] = param_6;
  local_58 = param_11;
  uStack_50 = param_12;
  local_98[0] = param_3;
  local_98[1] = param_4;
  local_78 = param_7;
  uStack_70 = param_8;
  uStack_60 = param_10;
  local_68 = param_9;
  lVar7 = 0;
  cVar6 = *param_2;
  if (cVar6 == '$') goto LAB_00507030;
LAB_00507014:
  if (cVar6 != '\0') {
    do {
      iVar2 = iVar2 + 1;
      while( true ) {
        uVar3 = (int)uVar5 + 1;
        uVar5 = (ulong)uVar3;
        lVar7 = (long)(int)uVar3;
        cVar6 = param_2[lVar7];
        if (cVar6 != '$') goto LAB_00507014;
LAB_00507030:
        uVar5 = lVar7 + 1;
        bVar1 = param_2[uVar5];
        if (9 < (byte)(bVar1 - 0x30)) break;
        if (*(int *)(alStack_218[bVar1] + 8) == -1) {
          return;
        }
        iVar2 = *(int *)(alStack_218[bVar1] + 8) + iVar2;
      }
      if (bVar1 != 0x24) {
        return;
      }
    } while( true );
  }
  if (iVar2 == 0) {
    return;
  }
  if ((*param_1 & 1) == 0) {
    uVar8 = (ulong)(*param_1 >> 1);
    uVar5 = uVar8 + (long)iVar2;
    if (uVar8 < uVar5) {
LAB_005070c8:
      FUN_002ce498(param_1,uVar5 - uVar8,0);
      uVar3 = (uint)*param_1;
      if ((*param_1 & 1) != 0) goto LAB_005070a4;
    }
    else {
      uVar3 = (int)uVar5 << 1;
      param_1[uVar5 + 1] = 0;
      *param_1 = (byte)uVar3;
    }
LAB_005070e0:
    iVar2 = (int)uVar8;
    if (1 < (uVar3 & 0xff)) {
      param_1 = param_1 + 1;
      goto LAB_00507110;
    }
  }
  else {
    uVar8 = *(ulong *)(param_1 + 8);
    uVar5 = (long)iVar2 + (long)(int)uVar8;
    if (uVar8 < uVar5) goto LAB_005070c8;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + uVar5) = 0;
    *(ulong *)(param_1 + 8) = uVar5;
    uVar3 = (uint)*param_1;
    if ((*param_1 & 1) == 0) goto LAB_005070e0;
LAB_005070a4:
    iVar2 = (int)uVar8;
    if (*(long *)(param_1 + 8) != 0) {
      param_1 = *(byte **)(param_1 + 0x10);
      goto LAB_00507110;
    }
  }
  param_1 = (byte *)0x0;
LAB_00507110:
  iVar4 = 0;
  __dest = param_1 + iVar2;
  while( true ) {
    while( true ) {
      bVar1 = param_2[iVar4];
      if (bVar1 != 0x24) break;
      lVar7 = (long)iVar4 + 1;
      uVar3 = (uint)(byte)param_2[lVar7];
      iVar2 = (int)lVar7;
      if ((uVar3 - 0x30 & 0xff) < 10) {
        puVar9 = (undefined8 *)local_98[uVar3 - 0x30];
        memcpy(__dest,(void *)*puVar9,(long)*(int *)(puVar9 + 1));
        __dest = __dest + *(int *)(puVar9 + 1);
        iVar4 = iVar2 + 1;
      }
      else if (uVar3 == 0x24) {
        *__dest = 0x24;
        iVar4 = iVar2 + 1;
        __dest = __dest + 1;
      }
      else {
        iVar4 = iVar4 + 1;
      }
    }
    if (bVar1 == 0) break;
    iVar4 = iVar4 + 1;
    *__dest = bVar1;
    __dest = __dest + 1;
  }
  return;
}


