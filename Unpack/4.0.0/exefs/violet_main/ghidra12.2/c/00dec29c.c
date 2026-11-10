/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dec29c; name: FUN_00dec29c
 */


void FUN_00dec29c(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  size_t sVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *__dest;
  undefined8 unaff_x23;
  undefined8 uVar8;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x40));
  puVar6 = *(undefined8 **)(param_1 + 0x118);
  puVar2 = *(undefined8 **)(param_1 + 0x120);
  lVar7 = *param_2;
  if (puVar6 != puVar2) {
    __dest = puVar6;
    do {
      if ((*(char *)(__dest + 3) == '\0') && (__dest[1] == lVar7)) goto LAB_00dec300;
      __dest = __dest + 4;
    } while (puVar2 != __dest);
    __dest = puVar2;
LAB_00dec300:
    if (puVar2 != __dest) {
      sVar3 = (long)puVar2 - (long)(__dest + 4);
      if (sVar3 != 0) {
        memmove(__dest,__dest + 4,sVar3);
      }
      *(size_t *)(param_1 + 0x120) = (long)__dest + sVar3;
      goto LAB_00dec384;
    }
    do {
      if ((*(char *)(puVar6 + 3) != '\0') && (puVar6[1] == lVar7)) goto LAB_00dec320;
      puVar6 = puVar6 + 4;
    } while (puVar2 != puVar6);
    puVar6 = puVar2;
  }
LAB_00dec320:
  if (puVar2 == puVar6) {
    bVar4 = false;
  }
  else {
    unaff_x23 = *puVar6;
    sVar3 = (long)puVar2 - (long)(puVar6 + 4);
    if (sVar3 != 0) {
      memmove(puVar6,puVar6 + 4,sVar3);
    }
    *(size_t *)(param_1 + 0x120) = (long)puVar6 + sVar3;
    bVar4 = true;
  }
  puVar6 = *(undefined8 **)(param_1 + 0xe0);
  puVar2 = *(undefined8 **)(param_1 + 0xe8);
  if ((puVar6 != puVar2) && (puVar6[1] != lVar7)) {
    do {
      if (puVar2 + -3 == puVar6) {
        puVar6 = puVar2;
        goto LAB_00dec370;
      }
      plVar1 = puVar6 + 4;
      puVar6 = puVar6 + 3;
    } while (*plVar1 != lVar7);
  }
LAB_00dec370:
  if (puVar2 != puVar6) {
    unaff_x23 = *puVar6;
    sVar3 = (long)puVar2 - (long)(puVar6 + 3);
    if (sVar3 != 0) {
      memmove(puVar6,puVar6 + 3,sVar3);
    }
    bVar4 = true;
    *(size_t *)(param_1 + 0xe8) = (long)puVar6 + sVar3;
  }
  if ((bVar4) && (*(long *)(param_1 + 0x60) != 0)) {
    uStack_50 = 0;
    local_48 = 0;
    puVar6 = *(undefined8 **)(param_1 + 0x158);
    local_58 = unaff_x23;
    if (puVar6 < *(undefined8 **)(param_1 + 0x160)) {
      uVar8 = *(undefined8 *)(param_1 + 0x168);
      if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar7 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar7 == 0) {
        puVar6[1] = uStack_50;
        puVar6[2] = CONCAT44(uStack_44,local_48);
        *puVar6 = local_58;
      }
      else {
        if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar8;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
        *puVar6 = local_58;
        puVar6[1] = uStack_50;
        puVar6[2] = CONCAT44(uStack_44,local_48);
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      }
      *(undefined8 **)(param_1 + 0x158) = puVar6 + 3;
    }
    else {
      FUN_00deccac(param_1 + 0x150,&local_58);
    }
  }
LAB_00dec384:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x40));
  return;
}


