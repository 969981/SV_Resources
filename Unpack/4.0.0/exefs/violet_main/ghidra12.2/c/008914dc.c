/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008914dc; name: FUN_008914dc
 */


undefined8 FUN_008914dc(long param_1,char *param_2)

{
  long lVar1;
  int *piVar2;
  size_t __n;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  size_t sVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  uint *puVar11;
  char *pcVar12;
  long lVar13;
  undefined8 local_170 [32];
  undefined4 local_70;
  undefined1 local_6c;
  
  lVar13 = *(long *)(param_1 + 0x10);
  do {
    if (param_1 + 8 == lVar13) {
      return 0;
    }
    lVar10 = *(long *)(lVar13 + 0x10);
    local_70 = 0x676d6974;
    local_6c = 0;
    pcVar12 = (char *)(lVar10 + 0x40);
    if ((*pcVar12 == '.') && (*(char *)(lVar10 + 0x41) == '\0')) {
      nn::util::SNPrintf((char *)local_170,0xff,"%s/%s",&local_70,"__Combined.bntx");
    }
    else {
      nn::util::SNPrintf((char *)local_170,0xff,"%s/%s/%s",pcVar12,&local_70,"__Combined.bntx");
    }
    lVar1 = lVar10 + 8;
    iVar4 = FUN_00892230(lVar1,local_170);
    if (iVar4 != -1) {
      local_170[0] = 0;
      lVar6 = FUN_008921c8(lVar1,local_170,iVar4);
      if ((lVar6 != 0) && (lVar6 = FUN_00ddef1c(), lVar6 != 0)) {
        lVar6 = *(long *)(lVar6 + 0x38);
        if (param_2 == (char *)0x0) {
          sVar7 = 0;
        }
        else {
          sVar7 = strlen(param_2);
        }
        uVar8 = (ulong)*(ushort *)(lVar6 + 0xc);
        puVar11 = (uint *)((int *)(lVar6 + 8) + uVar8 * 4);
        iVar4 = *(int *)(lVar6 + 8);
        while (uVar3 = *puVar11, iVar4 < (int)uVar3) {
          uVar9 = (long)((ulong)uVar3 << 0x20) >> 0x23;
          if (uVar9 < sVar7) {
            uVar9 = (ulong)((byte)param_2[sVar7 + ~uVar9] >> ((ulong)uVar3 & 7)) & 1;
          }
          else {
            uVar9 = 0;
          }
          piVar2 = (int *)(lVar6 + 8 + uVar8 * 0x10);
          uVar8 = (ulong)*(ushort *)((long)piVar2 + uVar9 * 2 + 4);
          puVar11 = (uint *)(lVar6 + 8 + uVar8 * 0x10);
          iVar4 = *piVar2;
        }
        uVar8 = (ulong)**(ushort **)(puVar11 + 2);
        __n = sVar7;
        if (uVar8 <= sVar7) {
          __n = uVar8;
        }
        if (__n == 0) {
          if (uVar8 <= sVar7) goto LAB_0089168c;
        }
        else {
          iVar5 = memcmp(*(ushort **)(puVar11 + 2) + 1,param_2,__n);
          iVar4 = iVar5;
          if (iVar5 == 0) {
            iVar4 = 1;
          }
          if (sVar7 < uVar8 || iVar5 != 0) {
            if (iVar4 != 0) goto LAB_008916ac;
          }
          else {
LAB_0089168c:
            if (uVar8 < sVar7) goto LAB_008916ac;
          }
          if ((int)((ulong)((long)puVar11 + (-0x18 - lVar6)) >> 4) != -1) goto LAB_00891748;
        }
      }
    }
LAB_008916ac:
    local_70 = 0x676d6974;
    local_6c = 0;
    if ((*pcVar12 == '.') && (*(char *)(lVar10 + 0x41) == '\0')) {
      nn::util::SNPrintf((char *)local_170,0xff,"%s/%s",&local_70,param_2);
    }
    else {
      nn::util::SNPrintf((char *)local_170,0xff,"%s/%s/%s",pcVar12,&local_70,param_2);
    }
    iVar4 = FUN_00892230(lVar1,local_170);
    if (iVar4 != -1) {
      local_170[0] = 0;
      lVar10 = FUN_008921c8(lVar1,local_170,iVar4);
      if (lVar10 != 0) {
LAB_00891748:
        return *(undefined8 *)(lVar13 + 0x10);
      }
    }
    lVar13 = *(long *)(lVar13 + 8);
  } while( true );
}


