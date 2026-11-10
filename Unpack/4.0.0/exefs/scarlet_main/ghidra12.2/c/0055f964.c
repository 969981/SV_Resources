/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0055f964; name: FUN_0055f964
 */


long * FUN_0055f964(long param_1,long *param_2,undefined8 *param_3)

{
  byte *__s2;
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  long *plVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  long *local_78;
  long *local_68;
  
  plVar9 = (long *)(param_1 + 8);
  local_68 = (long *)*plVar9;
  if (local_68 == (long *)0x0) {
    *param_2 = (long)plVar9;
    return plVar9;
  }
  pbVar4 = (byte *)*param_3;
  pbVar5 = (byte *)param_3[1];
  local_78 = (long *)(param_1 + 8);
  pbVar13 = (byte *)local_68[4];
  pbVar14 = (byte *)local_68[5];
  if (pbVar13 == pbVar14) goto LAB_0055fa94;
  do {
    pbVar12 = pbVar13 + 0x10;
    pbVar11 = pbVar4;
    while (pbVar5 != pbVar11) {
      bVar6 = pbVar12[-0x10];
      uVar1 = (ulong)(bVar6 >> 1);
      if ((bVar6 & 1) != 0) {
        uVar1 = *(ulong *)(pbVar12 + -8);
      }
      bVar7 = *pbVar11;
      uVar2 = (ulong)(bVar7 >> 1);
      if ((bVar7 & 1) != 0) {
        uVar2 = *(ulong *)(pbVar11 + 8);
      }
      sVar3 = uVar1;
      if (uVar2 <= uVar1) {
        sVar3 = uVar2;
      }
      if (sVar3 == 0) {
        if (uVar1 != uVar2) {
          if (uVar1 <= uVar2) goto LAB_0055fa94;
          break;
        }
      }
      else {
        pbVar10 = *(byte **)(pbVar11 + 0x10);
        if ((bVar7 & 1) == 0) {
          pbVar10 = pbVar11 + 1;
        }
        __s2 = pbVar12 + -0xf;
        if ((bVar6 & 1) != 0) {
          __s2 = *(byte **)pbVar12;
        }
        iVar8 = memcmp(pbVar10,__s2,sVar3);
        if (iVar8 == 0) {
          if (uVar2 < uVar1) break;
        }
        else if (iVar8 < 0) break;
        iVar8 = memcmp(__s2,pbVar10,sVar3);
        if (iVar8 == 0) {
          if (uVar1 < uVar2) goto LAB_0055fa94;
        }
        else if (iVar8 < 0) goto LAB_0055fa94;
      }
      pbVar10 = pbVar12 + 0x10;
      pbVar12 = pbVar12 + 0x20;
      pbVar11 = pbVar11 + 0x20;
      if (pbVar10 == pbVar14) goto LAB_0055fa94;
    }
    plVar9 = (long *)*local_68;
    local_78 = local_68;
    if (plVar9 == (long *)0x0) {
      *param_2 = (long)local_68;
      return local_68;
    }
    while( true ) {
      pbVar13 = (byte *)plVar9[4];
      pbVar14 = (byte *)plVar9[5];
      local_68 = plVar9;
      if (pbVar13 != pbVar14) break;
LAB_0055fa94:
      if (pbVar4 == pbVar5) {
LAB_0055fb9c:
        *param_2 = (long)local_68;
        return local_78;
      }
      pbVar12 = pbVar4 + 0x10;
      while (pbVar14 != pbVar13) {
        bVar6 = pbVar12[-0x10];
        uVar1 = (ulong)(bVar6 >> 1);
        if ((bVar6 & 1) != 0) {
          uVar1 = *(ulong *)(pbVar12 + -8);
        }
        bVar7 = *pbVar13;
        uVar2 = (ulong)(bVar7 >> 1);
        if ((bVar7 & 1) != 0) {
          uVar2 = *(ulong *)(pbVar13 + 8);
        }
        sVar3 = uVar1;
        if (uVar2 <= uVar1) {
          sVar3 = uVar2;
        }
        if (sVar3 == 0) {
          if (uVar1 != uVar2) {
            if (uVar1 <= uVar2) goto LAB_0055fb9c;
            break;
          }
        }
        else {
          pbVar11 = *(byte **)(pbVar13 + 0x10);
          if ((bVar7 & 1) == 0) {
            pbVar11 = pbVar13 + 1;
          }
          pbVar10 = pbVar12 + -0xf;
          if ((bVar6 & 1) != 0) {
            pbVar10 = *(byte **)pbVar12;
          }
          iVar8 = memcmp(pbVar11,pbVar10,sVar3);
          if (iVar8 == 0) {
            if (uVar2 < uVar1) break;
          }
          else if (iVar8 < 0) break;
          iVar8 = memcmp(pbVar10,pbVar11,sVar3);
          if (iVar8 == 0) {
            if (uVar1 < uVar2) goto LAB_0055fb9c;
          }
          else if (iVar8 < 0) goto LAB_0055fb9c;
        }
        pbVar11 = pbVar12 + 0x10;
        pbVar12 = pbVar12 + 0x20;
        pbVar13 = pbVar13 + 0x20;
        if (pbVar11 == pbVar5) goto LAB_0055fb9c;
      }
      local_78 = local_68 + 1;
      plVar9 = (long *)*local_78;
      if (plVar9 == (long *)0x0) {
        *param_2 = (long)local_68;
        return local_78;
      }
    }
  } while( true );
}


