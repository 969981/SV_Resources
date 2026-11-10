/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d090a0; name: FUN_01d090a0
 */


int FUN_01d090a0(undefined8 param_1)

{
  ulong uVar1;
  char *pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  byte local_b0;
  undefined7 uStack_af;
  ulong local_a8;
  char *local_a0;
  long *plStack_98;
  byte local_90;
  undefined7 uStack_8f;
  ulong local_88;
  char *local_80;
  long *plStack_78;
  byte local_70;
  undefined7 uStack_6f;
  ulong local_68;
  char *local_60;
  long *plStack_58;
  byte local_50;
  undefined7 uStack_4f;
  ulong local_48;
  undefined8 local_40;
  long *plStack_38;
  
  FUN_01cfa5b0(&local_50,param_1);
  uVar1 = (ulong)(local_50 >> 1);
  if ((local_50 & 1) != 0) {
    uVar1 = local_48;
  }
  if (uVar1 == 5) {
    FUN_01f7b608(&local_70,&local_50,0,1,&plStack_38);
    uVar1 = (ulong)(local_70 >> 1);
    if ((local_70 & 1) != 0) {
      uVar1 = local_68;
    }
    if (uVar1 == 1) {
      FUN_01f7b608(&local_90,&local_50,1,2,&plStack_38);
      uVar1 = (ulong)(local_90 >> 1);
      if ((local_90 & 1) != 0) {
        uVar1 = local_88;
      }
      if (uVar1 == 2) {
        FUN_01f7b608(&local_b0,&local_50,3,2,&plStack_38);
        bVar4 = local_b0;
        uVar1 = (ulong)(local_b0 >> 1);
        if ((local_b0 & 1) != 0) {
          uVar1 = local_a8;
        }
        if (uVar1 == 2) {
          pcVar2 = (char *)((ulong)&local_70 | 1);
          if ((local_70 & 1) != 0) {
            pcVar2 = local_60;
          }
          cVar3 = *pcVar2;
          pcVar2 = (char *)((ulong)&local_90 | 1);
          if ((local_90 & 1) != 0) {
            pcVar2 = local_80;
          }
          iVar5 = atoi(pcVar2);
          pcVar2 = (char *)((ulong)&local_b0 | 1);
          if ((bVar4 & 1) != 0) {
            pcVar2 = local_a0;
          }
          iVar6 = atoi(pcVar2);
          iVar6 = iVar5 * 0xe10 + iVar6 * 0x3c;
          iVar5 = -iVar6;
          if (cVar3 == '+') {
            iVar5 = iVar6;
          }
        }
        else {
          iVar5 = 0;
        }
        if ((bVar4 & 1) != 0) {
          (**(code **)(*plStack_98 + 0x18))
                    (plStack_98,local_a0,CONCAT71(uStack_af,local_b0) & 0xfffffffffffffffe,1);
        }
      }
      else {
        iVar5 = 0;
      }
      if ((local_90 & 1) != 0) {
        (**(code **)(*plStack_78 + 0x18))
                  (plStack_78,local_80,CONCAT71(uStack_8f,local_90) & 0xfffffffffffffffe,1);
      }
    }
    else {
      iVar5 = 0;
    }
    if ((local_70 & 1) != 0) {
      (**(code **)(*plStack_58 + 0x18))
                (plStack_58,local_60,CONCAT71(uStack_6f,local_70) & 0xfffffffffffffffe,1);
    }
  }
  else {
    iVar5 = 0;
  }
  if ((local_50 & 1) != 0) {
    (**(code **)(*plStack_38 + 0x18))
              (plStack_38,local_40,CONCAT71(uStack_4f,local_50) & 0xfffffffffffffffe,1);
  }
  return iVar5;
}


